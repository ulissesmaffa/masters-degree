
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "network.h"

#include "q_math.h"
#include "eval_images.h"
#include "weights.h"
#include "conv_engine.h"

#define DEBUG_DUMP_PARTIALS 0

/**
 * Prints the string presented to it to the standard output of the platform,
 * and in addition reports success or failure, if supported by the platform.
 */
int puts_succeed(const char *str) {
  return puts(str);
}

int puts_fail(const char *str) {
  return puts(str);
}


static void put_app_version() {
	putchar('X');
	putchar('6');
}

static void put_padding( uint8_t do_padding, uint8_t pad_len, int8_t pad_character, uint8_t num_len) {
	if ((do_padding != 0) && (num_len < pad_len)) {
		for (uint8_t i=num_len; i<pad_len; i++) {
			putchar(pad_character);
		}
	}
}

#define DO_PADDING 1
#define NO_PADDING 0
#define PAD_BLANK ' '

static void put_signed_short(const int16_t n, int8_t pad_len)
{
    uint8_t is_negative;
    uint8_t i;
    int8_t output_digits[32];
    uint16_t num;

    if (n < 0) {
        is_negative = 1;
        num = -n;
    }
    else{
        is_negative = 0;
        num = n;
    }


    for(i = 0; i<32; i++) {
        output_digits[i] = '0';
    }

    i = 0;
    do {
        output_digits[i] = '0'+(num % 10);
        i++;
        num /= 10;
    } while (num > 0);

    if (is_negative != 0) {
        output_digits[i] = '-';
        i++;
    }

    output_digits[i] = 0;

    put_padding(DO_PADDING, pad_len, PAD_BLANK, i);
    while (i) {
        i--;
        putchar( output_digits[i] );
    }
}

static void put_signed_long(const int64_t n, int8_t pad_len)
{
    uint8_t is_negative;
    uint8_t i;
    int8_t output_digits[32];
    uint64_t num;

    if (n < 0) {
        is_negative = 1;
        num = -n;
    }
    else{
        is_negative = 0;
        num = n;
    }


    for(i = 0; i<32; i++) {
        output_digits[i] = '0';
    }

    i = 0;
    do {
        output_digits[i] = '0'+(num % 10);
        i++;
        num /= 10;
    } while (num > 0);

    if (is_negative != 0) {
        output_digits[i] = '-';
        i++;
    }

    output_digits[i] = 0;

    put_padding(DO_PADDING, pad_len, PAD_BLANK, i);
    while (i) {
        i--;
        putchar( output_digits[i] );
    }
}


void send_status(short status, short line) {
	puts("");
	put_app_version();
	putchar(' ');
	put_signed_short(line,0);
	putchar(' ');
	put_signed_short(status,0);
	puts(" +++");
}


#if RUN_LEGACY_CONV

int process_image_or_hang_legacy(uint16_t image_index) {
	int i;
	uint8_t gold_label;
	uint8_t expected_label;
	uint8_t predicted_label;
	gpool_ddr_t max_out;

	int image_pixels = (IMAGE_SZ_IN*IMAGE_SZ_IN*IMAGE_CH_IN);
	int image_offset = image_index * image_pixels;
    pixel_ddr_t* pixels;
    pixels = &(g_imageset.pixels[image_offset]);

	// INPUT IMAGE

	if ( populate_test_image_cwh_on_feature_buffer(0, pixels) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}

	// CONV1

	if ( net_process_layer_conv_legacy_p1(
        0, 1, 
        CONV1_WEIGHTS_OFFSET, CONV1_BIAS_OFFSET, 
        CONV1_STRIDE, CONV1_WH_KERNEL,
        CONV1_CH_IN, CONV1_WH_IN,
        CONV1_CH_OUT, CONV1_WH_OUT,
        APPLY_RELU ) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
	#if DEBUG_DUMP_PARTIALS
    net_dump_feature_map("LEG1ACT", 1, CONV1_CH_OUT, CONV1_WH_OUT, 1, 8);
	#endif

	// CONV2

    if ( net_process_layer_conv_legacy_p1(
        1, 0, 
        CONV2_WEIGHTS_OFFSET, CONV2_BIAS_OFFSET, 
        CONV2_STRIDE, CONV2_WH_KERNEL,
        CONV2_CH_IN, CONV2_WH_IN,
        CONV2_CH_OUT, CONV2_WH_OUT,
        APPLY_RELU ) != EXIT_SUCCESS ) {
        return EXIT_FAILURE;
    }
	#if DEBUG_DUMP_PARTIALS 
    net_dump_feature_map("LEG2ACT", 0, CONV2_CH_OUT, CONV2_WH_OUT, 2, 8);
	#endif

	// CONV3

    if ( net_process_layer_conv_legacy_p1(
        0, 1,
        CONV3_WEIGHTS_OFFSET, CONV3_BIAS_OFFSET, 
        CONV3_STRIDE, CONV3_WH_KERNEL,
        CONV3_CH_IN, CONV3_WH_IN,
        CONV3_CH_OUT, CONV3_WH_OUT,
        APPLY_RELU ) != EXIT_SUCCESS ) {
        return EXIT_FAILURE;
    }
	#if DEBUG_DUMP_PARTIALS 
    net_dump_feature_map("LEG3ACT", 1, CONV3_CH_OUT, CONV3_WH_OUT, 1, 8);
	#endif

#if 1
	if ( net_process_global_pool(1)  != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
#endif

	max_out = GPOOL_MINIMUM;
	predicted_label = 0xFF;
	for (i=0; i<POOLING_CH_OUT; i++) {
		if ( max_out < g_pooling_buffer[i] ) {
			max_out = g_pooling_buffer[i];
			predicted_label = i;
		}
	}

	gold_label = g_gold_labels.labels[image_index];
	expected_label = g_predicted_labels.labels[image_index];

#if 1
	put_app_version();

	if (predicted_label == gold_label) {
		putchar('-');
	}
	else {
		if (predicted_label == expected_label) {
			putchar('+');
		}
		else {
			putchar('*');
		}
	}

	putchar(' ');
	putchar('i');
	put_signed_short(image_index, 3);

	putchar(' ');
	putchar('g');
	put_signed_short(gold_label, 2);

	putchar(' ');
	putchar('p');
	put_signed_short(expected_label, 2);

	putchar(' ');
	putchar('n');
	put_signed_short(predicted_label, 2);

	for (i=0; i<POOLING_CH_OUT; i++) {
		putchar(' ');
		put_signed_short(g_pooling_buffer[i], 4);
	}
	puts("");

#endif

	if (predicted_label != expected_label) {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

#endif /* RUN_LEGACY_CONV */

#if RUN_IM2COL_CONV

int process_image_or_hang_im2col(uint16_t image_index) {
	int i;
	uint8_t gold_label;
	uint8_t expected_label;
	uint8_t predicted_label;
	gpool_ddr_t max_out;

	int image_pixels = (IMAGE_SZ_IN*IMAGE_SZ_IN*IMAGE_CH_IN);
	int image_offset = image_index * image_pixels;
    pixel_ddr_t* pixels;
    pixels = &(g_imageset.pixels[image_offset]);

	// INPUT IMAGE

	if ( populate_test_image_cwh_on_feature_buffer(0, pixels) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}

	// CONV 1

	if ( net_process_layer_conv_im2col_p1(
        0, 1,
        CONV1_WEIGHTS_OFFSET, CONV1_BIAS_OFFSET, 
        CONV1_STRIDE, CONV1_WH_KERNEL,
        CONV1_CH_IN, CONV1_WH_IN,
        CONV1_CH_OUT, CONV1_WH_OUT,
        NO_RELU ) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
	#if DEBUG_DUMP_PARTIALS	
    net_dump_feature_map("I2C1PRE", 1, CONV1_CH_OUT, CONV1_WH_OUT, 1, 8);
	#endif
	if ( net_process_layer_relu_in_place(
        1, 
        CONV1_BIAS_OFFSET,
        CONV1_CH_OUT, CONV1_WH_OUT) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
	#if DEBUG_DUMP_PARTIALS	
    net_dump_feature_map("I2C1ACT", 1, CONV1_CH_OUT, CONV1_WH_OUT, 1, 8);
	#endif

	// CONV2

	if ( net_process_layer_conv_im2col_p1(
        1, 0, 
        CONV2_WEIGHTS_OFFSET, CONV2_BIAS_OFFSET, 
        CONV2_STRIDE, CONV2_WH_KERNEL,
        CONV2_CH_IN, CONV2_WH_IN,
        CONV2_CH_OUT, CONV2_WH_OUT,
        NO_RELU ) != EXIT_SUCCESS ) {
        return EXIT_FAILURE;
    }
	#if DEBUG_DUMP_PARTIALS	
    net_dump_feature_map("I2C2PRE", 0, CONV2_CH_OUT, CONV2_WH_OUT, 2, 8);
	#endif
	if ( net_process_layer_relu_in_place(
        0, 
        CONV2_BIAS_OFFSET,
        CONV2_CH_OUT, CONV2_WH_OUT) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
	#if DEBUG_DUMP_PARTIALS
    net_dump_feature_map("I2C2ACT", 0, CONV2_CH_OUT, CONV2_WH_OUT, 2, 8);
	#endif
	// CONV3

	if ( net_process_layer_conv_im2col_p1(
        0, 1, 
        CONV3_WEIGHTS_OFFSET, CONV3_BIAS_OFFSET, 
        CONV3_STRIDE, CONV3_WH_KERNEL,
        CONV3_CH_IN, CONV3_WH_IN,
        CONV3_CH_OUT, CONV3_WH_OUT,
        NO_RELU ) != EXIT_SUCCESS ) {
        return EXIT_FAILURE;
    }
	#if DEBUG_DUMP_PARTIALS
    net_dump_feature_map("I2C3PRE", 1, CONV3_CH_OUT, CONV3_WH_OUT, 1, 8);
	#endif
	if ( net_process_layer_relu_in_place(
        1, 
        CONV3_BIAS_OFFSET,
        CONV3_CH_OUT, CONV3_WH_OUT) != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
	#if DEBUG_DUMP_PARTIALS
    net_dump_feature_map("I2C3ACT", 1, CONV3_CH_OUT, CONV3_WH_OUT, 1, 8);
	#endif


#if 1
	if ( net_process_global_pool(1)  != EXIT_SUCCESS ) {
		return EXIT_FAILURE;
	}
#endif

	max_out = GPOOL_MINIMUM;
	predicted_label = 0xFF;
	for (i=0; i<POOLING_CH_OUT; i++) {
		if ( max_out < g_pooling_buffer[i] ) {
			max_out = g_pooling_buffer[i];
			predicted_label = i;
		}
	}

	gold_label = g_gold_labels.labels[image_index];
	expected_label = g_predicted_labels.labels[image_index];

#if 1
	put_app_version();

	if (predicted_label == gold_label) {
		putchar('=');
	}
	else {
		if (predicted_label == expected_label) {
			putchar('?');
		}
		else {
			putchar('!');
		}
	}

	putchar(' ');
	putchar('i');
	put_signed_short(image_index, 3);

	putchar(' ');
	putchar('g');
	put_signed_short(gold_label, 2);

	putchar(' ');
	putchar('p');
	put_signed_short(expected_label, 2);

	putchar(' ');
	putchar('n');
	put_signed_short(predicted_label, 2);

	for (i=0; i<POOLING_CH_OUT; i++) {
		putchar(' ');
		put_signed_short(g_pooling_buffer[i], 4);
	}
	puts("");
#endif

	if (predicted_label != expected_label) {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
#endif /* RUN_IM2COL_CONV */

int main(void) {
	int test_cycle;
	int image_index;

	puts("SAT-6");

	// Sanity check
	if (IMAGE_CACHE_BITS!=g_images_bit_width) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if (IMAGE_CACHE_INTEGER!=g_images_integer_length) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if (WEIGHT_CACHE_BITS!=g_weights_bit_width) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if (WEIGHT_CACHE_INTEGER!=g_weights_integer_length) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if (TOTAL_NUM_WEIGHTS!=g_total_num_weights) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if (TOTAL_NUM_IMAGES!=g_total_num_images) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}
	if ((TOTAL_NUM_IMAGES*IMAGE_SZ_IN*IMAGE_SZ_IN*IMAGE_CH_IN)!=g_total_num_pixels) {
		send_status(0, __LINE__);
		goto terminate_failed;
	}

	puts(">");

	for (test_cycle=0; test_cycle<1; test_cycle++) {
		for (image_index=0; image_index<TOTAL_NUM_IMAGES; image_index++) {
			// if (process_image_or_hang_legacy(image_index) != EXIT_SUCCESS) {
			// 	goto terminate_failed;
			// }
			if (process_image_or_hang_im2col(image_index) != EXIT_SUCCESS) {
				goto terminate_failed;
			}
		}
	}

	puts_succeed("SAT-6 ok");
	return EXIT_SUCCESS;

terminate_failed:
	puts_fail("SAT-6 failed");
	return EXIT_FAILURE;
}
