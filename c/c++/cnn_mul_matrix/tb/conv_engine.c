
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>
#include <cblas.h>

#include "network.h"

#include "q_math.h"
#include "weights.h"
#include "conv_engine.h"

#define FEATURE_BUFFER_SIZE 4096
#define FEATURE_BUFFER_N 2

feature_ddr_t g_feature_buffer[FEATURE_BUFFER_N][FEATURE_BUFFER_SIZE];
gpool_ddr_t   g_pooling_buffer[POOLING_CH_OUT];



/* Convert input image pixel representation to an uniform representation used throughout all feature maps inside CNN. */
feature_ddr_t pixel_to_feature(pixel_ddr_t p) {
	feature_ddr_t x;
	x = p<<(MACC_FRACTIONAL_PRECISION-IMAGE_FRACTIONAL_PRECISION);
	return x;
}




int populate_test_image_cwh_on_feature_buffer(uint8_t out_buffer, pixel_ddr_t* pixels) {
	int i;

	int image_pixels = (IMAGE_SZ_IN*IMAGE_SZ_IN*IMAGE_CH_IN);

	if (out_buffer >= FEATURE_BUFFER_N ) {
		send_status(out_buffer, __LINE__);
		return EXIT_FAILURE;
	}


	if (FEATURE_BUFFER_SIZE < image_pixels ) {
		send_status(image_pixels, __LINE__);
		return EXIT_FAILURE;
	}

	for (i=0; i<image_pixels; i++) {
		g_feature_buffer[out_buffer][i] = pixel_to_feature(pixels[i]);
	}

	return EXIT_SUCCESS;
}

int net_process_global_pool(uint8_t in_buffer) {
	int co;
	gpool_ddr_t ch_out_sum;

	if (in_buffer >= FEATURE_BUFFER_N ) {
		send_status(in_buffer, __LINE__);
		return EXIT_FAILURE;
	}


	feature_ddr_t* in_data =  &(g_feature_buffer[in_buffer][0]);
	gpool_ddr_t* out_data = &(g_pooling_buffer[0]);

	if ((sizeof(g_pooling_buffer)/sizeof(g_pooling_buffer[0])) < POOLING_CH_OUT ) {
		send_status(POOLING_CH_OUT, __LINE__);
		return EXIT_FAILURE;
	}

	for (co=0; co<POOLING_CH_OUT; co++) {
		ch_out_sum = 0;

		for (int y_row_out=0; y_row_out<POOLING_WH_IN; y_row_out++) {
			for (int x_col_out=0; x_col_out<POOLING_WH_IN; x_col_out++) {
				int co_offset = co*POOLING_WH_IN*POOLING_WH_IN;
				int co_row_offset = y_row_out*POOLING_WH_IN + co_offset;
				int addr_pixel_offset = x_col_out + co_row_offset;
				short data;
				data = in_data[addr_pixel_offset];

				ch_out_sum = add_16_0_16_8(ch_out_sum, data);

			}
		}
		out_data[co] = ch_out_sum;
	}
	
	return EXIT_SUCCESS;
}


int net_process_layer_relu_in_place(
    uint8_t in_out_buffer,
    uint32_t bias_offset,
    uint8_t ch_out, uint16_t wh_out) {
	unsigned int global_y;
	unsigned int global_x;
	unsigned int global_co;
	unsigned int x_col_in;
	unsigned int y_row_in;

	if (in_out_buffer >= FEATURE_BUFFER_N ) {
		send_status(in_out_buffer, __LINE__);
		return EXIT_FAILURE;
	}

	feature_ddr_t* in_out_data = &(g_feature_buffer[in_out_buffer][0]);
	weight_ddr_t* relu_bias = &(g_weights.weights[bias_offset]);


	int layer_features = (wh_out*wh_out*ch_out);

	if (FEATURE_BUFFER_SIZE < layer_features ) {
		send_status(layer_features, __LINE__);
		return EXIT_FAILURE;
	}


	for (global_y=0; global_y<wh_out; global_y++) {
		for (global_x=0; global_x<wh_out; global_x++) {
			for (global_co=0; global_co<ch_out; global_co++) {
				feature_ddr_t out = 0;
                
                out = in_out_data[global_x + global_y*wh_out + global_co*wh_out*wh_out];
				out = add_16_8_8_0( out, relu_bias[global_co]);

				if (out < 0 ) {
					in_out_data[global_x + global_y*wh_out + global_co*wh_out*wh_out] = 0;
				}
				else {
					in_out_data[global_x + global_y*wh_out + global_co*wh_out*wh_out] = out;
				}
			}
		}
	}
	return EXIT_SUCCESS;
}


int net_dump_feature_map(char* tag, uint8_t out_buffer, uint8_t ch_out, uint16_t wh_out, uint16_t ch_max, uint8_t wh_max) {
	uint8_t row;
	uint8_t col;
	uint8_t ch;

	if (ch_out<ch_max) {
		ch_max = ch_out;
	}
	if (wh_out<wh_max) {
		wh_max = wh_out;
	}

	if (out_buffer >= FEATURE_BUFFER_N ) {
		send_status(out_buffer, __LINE__);
		return EXIT_FAILURE;
	}

	int layer_features = (wh_out*wh_out*ch_out);

	if (FEATURE_BUFFER_SIZE < layer_features ) {
		send_status(layer_features, __LINE__);
		return EXIT_FAILURE;
	}


    printf("\r\n");

    for ( ch = 0; ch < ch_max; ch++ ) {
	    printf("\r\n%s channel %u\r\n", tag, ch);
        for ( row = 0; row < wh_max; row++ ) {
            printf("%-3d", row);

            for ( col = 0;col < wh_max; col++ ) {
                float f = macc_16_8_to_float(
                    g_feature_buffer[out_buffer][col + row*wh_out + ch*wh_out*wh_out]
                );
                printf(" %8.4f", f);
            }
            if (wh_max<wh_out) {
                printf(" ...");
            }

            printf("\r\n");
        }

        if (wh_max<wh_out) {
            printf("...\r\n");
        }
    }

	return EXIT_SUCCESS;
}


int net_dump_float_buffer(char* tag, float* float_buffer, uint16_t rows, uint16_t cols, uint16_t row_max, uint8_t col_max) {
	uint8_t row;
	uint8_t col;

	if (rows<row_max) {
		row_max = rows;
	}
	if (cols<col_max) {
		col_max = cols;
	}

    printf("\r\n");

    printf("\r\n%s\r\n", tag);
    for ( row = 0; row < row_max; row++ ) {
        printf("%-3d", row);

        for ( col = 0;col < col_max; col++ ) {
            float f = float_buffer[col + row*cols];
            printf(" %8.4f", f);
        }
        if (col_max<cols) {
            printf(" ...");
        }

        printf("\r\n");
    }

    if (row_max<rows) {
        printf("...\r\n");
    }

	return EXIT_SUCCESS;
}


float net_peak_signal_to_noise_ratio(uint8_t out_buffer_1, uint8_t out_buffer_2, uint8_t ch_out, uint16_t wh_out) {
    double psnr = -INFINITY;

	uint8_t row;
	uint8_t col;
	uint8_t ch;

	int layer_features = (wh_out*wh_out*ch_out);

	if (FEATURE_BUFFER_SIZE < layer_features ) {
		send_status(layer_features, __LINE__);
		return INFINITY;
	}

	if (out_buffer_1 >= FEATURE_BUFFER_N ) {
		send_status(out_buffer_1, __LINE__);
		return INFINITY;
	}
	if (out_buffer_2 >= FEATURE_BUFFER_N ) {
		send_status(out_buffer_2, __LINE__);
		return INFINITY;
	}

    for ( ch = 0; ch < ch_out; ch++ ) {
        double ch_psnr = 0.0;
        double ch_max = -INFINITY;
        double ch_mse = 0.0;

        double ch_sum_diff_sq = 0.0;
        for ( row = 0; row < wh_out; row++ ) {
            for ( col = 0;col < wh_out; col++ ) {
                double diff;
                double f_1 = macc_16_8_to_float(
                    g_feature_buffer[out_buffer_1][col + row*wh_out + ch*wh_out*wh_out]
                );
                double f_2 = macc_16_8_to_float(
                    g_feature_buffer[out_buffer_1][col + row*wh_out + ch*wh_out*wh_out]
                );

                diff = f_1-f_2;
                ch_sum_diff_sq += ( diff * diff);

                if (ch_max < f_1) {
                    ch_max = f_1;
                }
            }
        }
        ch_mse = ch_sum_diff_sq / (wh_out*wh_out);
        if ( ch_mse > 0) {
            if (ch_max > 0) {
                ch_psnr = 10 * log10( (ch_max*ch_max) / ch_mse );
            }
            else {
                ch_psnr = INFINITY;
            }
        }
        else {
            ch_psnr = 0;
        }

        if (psnr < ch_psnr) {
            psnr = ch_psnr;
        }

    }

    return psnr;
}


#if RUN_LEGACY_CONV

int net_process_layer_conv_legacy_p1(
    uint8_t in_buffer, 
    uint8_t out_buffer, 
    uint32_t weights_offset, 
    uint32_t bias_offset,
    uint8_t stride,
    uint8_t wh_kernel,    
    uint8_t ch_in, uint16_t wh_in,
    uint8_t ch_out, uint16_t wh_out,
    uint8_t apply_relu) {
	unsigned int global_y;
	unsigned int global_x;
	unsigned int global_co;
	unsigned int x_col_in;
	unsigned int y_row_in;

    const int dump_debug_patches_todo = 0; // 0 for no debugging
    static int dump_debug_patches = 0;

	if (in_buffer >= FEATURE_BUFFER_N ) {
		send_status(in_buffer, __LINE__);
		return EXIT_FAILURE;
	}
	if (out_buffer >= FEATURE_BUFFER_N ) {
		send_status(out_buffer, __LINE__);
		return EXIT_FAILURE;
	}

	feature_ddr_t* in_data =  &(g_feature_buffer[in_buffer][0]);
	feature_ddr_t* out_data = &(g_feature_buffer[out_buffer][0]);
	weight_ddr_t* conv_wt =   &(g_weights.weights[weights_offset]);
	weight_ddr_t* relu_bias = &(g_weights.weights[bias_offset]);


	int layer_features = (wh_out*wh_out*ch_out);

	if (FEATURE_BUFFER_SIZE < layer_features ) {
		send_status(layer_features, __LINE__);
		return EXIT_FAILURE;
	}


	for (global_y=0; global_y<wh_out; global_y++) {
		for (global_x=0; global_x<wh_out; global_x++) {
			for (global_co=0; global_co<ch_out; global_co++) {
				feature_ddr_t out = 0;

				x_col_in = global_x * stride;
				y_row_in = global_y * stride;

				for (int ci=0; ci<ch_in; ci++) {
					//feature_ddr_t out_mul[wh_kernel*wh_kernel];
					feature_ddr_t fm[wh_kernel*wh_kernel];
					weight_ddr_t wt[wh_kernel*wh_kernel];



					for (int j=0; j<wh_kernel; j++) {
						int y_row = y_row_in + j - 1;

						for (int i=0; i<wh_kernel; i++) {
							int x_col = x_col_in + i - 1;

                            int w_offset =	ci * (ch_out*wh_kernel*wh_kernel) +
                                            global_co * (wh_kernel*wh_kernel) +
                                            j * wh_kernel +
                                            i;
                            wt[j * wh_kernel + i] = conv_wt[w_offset];


							if ( (x_col < 0) || (x_col >= wh_in) || (y_row < 0) || (y_row >= wh_in) ) {
								fm[j * wh_kernel + i] = 0;
							}
							else {
								int i_offset =	ci*wh_in*wh_in +
												y_row*wh_in +
												x_col;

								fm[j * wh_kernel + i] = in_data[i_offset];
							}
						}
					}


                    if (dump_debug_patches < dump_debug_patches_todo) {
                        printf("patch %d ci %d co %d col %d row %d w:", dump_debug_patches, ci, global_co, x_col_in, y_row_in);
                        for (int i=0; i<(wh_kernel*wh_kernel); i++) {
                            printf(" %d", wt[i]);
                        }
                        printf("\n");
                        printf("patch %d ci %d co %d col %d row %d i:", dump_debug_patches, ci, global_co, x_col_in, y_row_in);
                        for (int i=0; i<(wh_kernel*wh_kernel); i++) {
                            printf(" %d", fm[i]/MACC_FIX_ONE);
                        }
                        printf("\n\n");

                        dump_debug_patches++;
                    }

					for (int i=0; i<(wh_kernel*wh_kernel); i++) {
                        out = macc_16_8_8_0_16_8(fm[i], wt[i], out);
                    }

				}

                if (apply_relu == APPLY_RELU) {
                    out = add_16_8_8_0( out, relu_bias[global_co]);
                    if (out < 0) {
                        out = 0;
                    }
				}

                out_data[global_x + global_y*wh_out + global_co*wh_out*wh_out] = out;
			}
		}
	}
	return EXIT_SUCCESS;
}
#endif /* RUN_LEGACY_CONV */



#if RUN_IM2COL_CONV

//From Berkeley Vision's Caffe
//Refer to Caffe's license : https://github.com/BVLC/caffe/blob/master/LICENSE
static inline uint8_t is_a_ge_zero_and_a_lt_b(int a, int b) {
    return (unsigned int)a < (unsigned int)(b);
}

static void net_im2col(
    const feature_ddr_t *data_im, 
    const int channels,
    const int height, const int width, 
    const int kernel_h, const int kernel_w,
    const int pad_h, const int pad_w,
    const int stride_h, const int stride_w,
    feature_ddr_t *data_col) {

    const int output_h = (height + 2 * pad_h - ((kernel_h - 1) + 1)) / stride_h + 1;
    const int output_w = (width  + 2 * pad_w - ((kernel_w - 1) + 1)) / stride_w + 1;
    const int channel_size = height * width;

    for (int channel = channels; channel--; data_im += channel_size) {
        for (int kernel_row = 0; kernel_row < kernel_h; kernel_row++) {
            for (int kernel_col = 0; kernel_col < kernel_w; kernel_col++) {
        
                int input_row = -pad_h + kernel_row;

                for (int output_rows = output_h; output_rows; output_rows--) {
                    if (!is_a_ge_zero_and_a_lt_b(input_row, height)) {
                        for (int output_cols = output_w; output_cols; output_cols--) {
                            *(data_col++) = 0;
                        }
                    } 
                    else {
                        int input_col = -pad_w + kernel_col;

                        for (int output_col = output_w; output_col; output_col--) {
                            if (is_a_ge_zero_and_a_lt_b(input_col, width)) {
                                //*(data_col++) = macc_16_8_to_float(data_im[input_row * width + input_col]);
                                *(data_col++) = data_im[input_row * width + input_col];
                            } else {
                                *(data_col++) = 0;
                            }
                            input_col += stride_w;
                        }
                    }
                    input_row += stride_h;
                }
            }
        }
    }
}

void net_mxm_float(float* mat_a, float* mat_b, float* mat_c, int dim_M, int dim_N, int dim_K)
{
    int row;
    int col;
    int k;

    for (row = 0; row<dim_M; row++)
    {
        int row_offset_c = (row * dim_N);
        int row_offset_a = (row * dim_K);

        for (k = 0; k<dim_K; k++)
        {
            int row_offset_b = (k * dim_N);

            for (col = 0; col<dim_N; col++) 
            {
                if ( k == 0 ) {
                    mat_c[ col + row_offset_c ] = 0.0;
                }
                mat_c[ col + row_offset_c ] += mat_a[ k + row_offset_a ] * mat_b[ col + row_offset_b ];
            }
        }
    }
}

void net_mxm_8_0_16_8(weight_ddr_t* mat_a, feature_ddr_t* mat_b, feature_ddr_t* mat_c, int dim_M, int dim_N, int dim_K)
{
    int row;
    int col;
    int k;

    for (row = 0; row<dim_M; row++)
    {
        int row_offset_c = (row * dim_N);
        int row_offset_a = (row * dim_K);

        for (k = 0; k<dim_K; k++)
        {
            int row_offset_b = (k * dim_N);

            for (col = 0; col<dim_N; col++) 
            {
                if ( k == 0 ) {
                    mat_c[ col + row_offset_c ] = 0.0;
                }
                mat_c[ col + row_offset_c ] = macc_16_8_8_0_16_8(mat_b[ col + row_offset_b ], mat_a[ k + row_offset_a ], mat_c[ col + row_offset_c ]);
            }
        }
    }
}


// WORKAROUND:
// Scratchpar for weights is required here only because weights were originally exported in the best sequence for ZynqNet engine...
// @TODO We can always export them again from training flow in the correct order.
#define SCRATCHPAD_W_SIZE (16*16*3*3)
weight_ddr_t g_scratchpad_w[SCRATCHPAD_W_SIZE];


#define SCRATCHPAD_I_SIZE (16*16*4*3*3)
feature_ddr_t g_scratchpad_i[SCRATCHPAD_I_SIZE];


int net_process_layer_conv_im2col_p1(
    uint8_t in_buffer, 
    uint8_t out_buffer, 
    uint32_t weights_offset, 
    uint32_t bias_offset,
    uint8_t stride,
    uint8_t wh_kernel,    
    uint8_t ch_in, uint16_t wh_in,
    uint8_t ch_out, uint16_t wh_out,
    uint8_t apply_relu) {


	unsigned int global_y;
	unsigned int global_x;
	unsigned int global_co;
	unsigned int x_col_in;
	unsigned int y_row_in;

	if (in_buffer >= FEATURE_BUFFER_N ) {
		send_status(in_buffer, __LINE__);
		return EXIT_FAILURE;
	}
	if (out_buffer >= FEATURE_BUFFER_N ) {
		send_status(out_buffer, __LINE__);
		return EXIT_FAILURE;
	}

    if (apply_relu == APPLY_RELU) {
		send_status(apply_relu, __LINE__);
		return EXIT_FAILURE;
    }

	feature_ddr_t* in_data =  &(g_feature_buffer[in_buffer][0]);
	feature_ddr_t* out_data = &(g_feature_buffer[out_buffer][0]);
	weight_ddr_t* conv_wt =   &(g_weights.weights[weights_offset]);


	int layer_features = (wh_out*wh_out*ch_out);
	if (FEATURE_BUFFER_SIZE < layer_features ) {
		send_status(layer_features, __LINE__);
		return EXIT_FAILURE;
	}


    int layer_im2col = (wh_out * wh_out * ch_in * wh_kernel * wh_kernel);
	if (SCRATCHPAD_I_SIZE < layer_im2col ) {
		send_status(layer_im2col, __LINE__);
		return EXIT_FAILURE;
	}


    int layer_weights = (wh_kernel*wh_kernel*ch_in*ch_out);
	if (SCRATCHPAD_W_SIZE < layer_weights ) {
		send_status(layer_weights, __LINE__);
		return EXIT_FAILURE;
	}

    // WORKAROUND:
    // Data reordering is done here only because weights were originally exported in the best sequence for ZynqNet engine...
    // @TODO We can always export them again from training flow in the correct order.
    for (global_co=0; global_co<ch_out; global_co++) {
        for (int ci=0; ci<ch_in; ci++) {
            for (int j=0; j<wh_kernel; j++) {
                for (int i=0; i<wh_kernel; i++) {
                    int w_offset_in = ci * (ch_out*wh_kernel*wh_kernel) +
                                    global_co * (wh_kernel*wh_kernel) +
                                    j * wh_kernel +
                                    i;
                    int w_offset_out = global_co * (ch_in*wh_kernel*wh_kernel) +
                                        ci * (wh_kernel*wh_kernel) +
                                    j * wh_kernel +
                                    i;
                    //g_scratchpad_w[w_offset_out] = macc_16_8_to_float(conv_wt[w_offset_in]);
                    g_scratchpad_w[w_offset_out] = conv_wt[w_offset_in];
                }
            }
        }
    }

    // net_dump_float_buffer("W",
    //     g_scratchpad_w, 
    //     ch_out, // rows
    //     wh_kernel * wh_kernel * ch_in, // cols
    //     20,
    //     20
    // );


    int pad = 0;
    pad = wh_kernel / 2;

    net_im2col(in_data,
        ch_in, wh_in, wh_in,
        wh_kernel, wh_kernel,
        pad, pad,
        stride, stride,
        g_scratchpad_i );

    // net_dump_float_buffer("I",
    //     g_scratchpad_i, 
    //     wh_kernel * wh_kernel * ch_in, // rows
    //     wh_out * wh_out, // cols
    //     16,
    //     16
    // );

    int m_c_rows = ch_out;
    int n_c_cols = wh_out * wh_out;
    int k = wh_kernel * wh_kernel * ch_in;

    net_mxm_8_0_16_8(g_scratchpad_w, g_scratchpad_i, out_data, m_c_rows, n_c_cols, k);

	return EXIT_SUCCESS;
}

#endif /* RUN_IM2COL_CONV */
