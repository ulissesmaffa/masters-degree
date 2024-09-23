#include "kernel_kernel.h"
/* Module Definition */
void A_IO_L3_in(hls::stream<A_t16> &fifo_A_in, hls::stream<A_t16> &fifo_A_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
      for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
        // array
        // io_L3
        for (ap_uint<2> c3 = 0; c3 <= 1; c3 += 1) {
          // io_L2
          for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
          #pragma HLS PIPELINE II=1
            // access_coalesce
            // access_serialize
            {
              A_t16 in_data;
              A_t16 out_data;
              in_data = fifo_A_in.read();
              out_data = in_data;
              fifo_A_local_out.write(out_data);
            }
          }
        }
      }
}
/* Module Definition */

/* Module Definition */
void A_IO_L3_in_serialize(A_t16 *A, hls::stream<A_t16> &fifo_A_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<11> i = 0; i < 1024; i++) {
  #pragma HLS PIPELINE II=1
    A_t16 fifo_data;
    fifo_data = A[i];
    fifo_A_local_out.write(fifo_data);
  }
}
/* Module Definition */

/* Module Definition */
void A_IO_L2_in_intra_trans(int idx, int c0, int c1, int c2, A_t16 local_A[8][1], hls::stream<A_t2> &fifo_A_local_out, bool intra_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  A_t2 data_split[8];
  #pragma HLS ARRAY_PARTITION variable=data_split complete
  /* Variable Declaration */

  if (!intra_trans_en) return;


  // io_L2
  // io_L1
  // pe
  for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
    // latency
    for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
      // latency
      for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
      #pragma HLS PIPELINE II=1
        // simd
        {
          A_t16 in_data;
          A_t2 out_data;
          in_data = local_A[c7][2 * c5 / 16];
          for (ap_uint<4> n = 0; n < 8; n++) {
          #pragma HLS UNROLL
            data_split[n] = in_data(63, 0);
            in_data = in_data >> 64;
          }
          int split_idx = (c5) % 8;
          out_data = data_split[split_idx];
          fifo_A_local_out.write(out_data);
        }
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void A_IO_L2_in_inter_trans(int idx, int c0, int c1, int c2, A_t16 local_A[8][1], hls::stream<A_t16> &fifo_A_in, hls::stream<A_t16> &fifo_A_out, bool inter_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  if (!inter_trans_en) return;

  for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1) {
    // io_L2
    if (c3 == p0) {
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          A_t16 in_data;
          A_t16 out_data;
          in_data = fifo_A_in.read();
          out_data = in_data;
          local_A[c4][0] = out_data;
        }
      }
    } else {
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          A_t16 in_data;
          A_t16 out_data;
          in_data = fifo_A_in.read();
          out_data = in_data;
          fifo_A_out.write(out_data);
        }
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void A_IO_L2_in_inter_trans_boundary(int idx, int c0, int c1, int c2, A_t16 local_A[8][1], hls::stream<A_t16> &fifo_A_in, bool inter_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  if (!inter_trans_en) return;

  for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1)
    if (c3 == p0) {
      // io_L2
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          A_t16 in_data;
          A_t16 out_data;
          in_data = fifo_A_in.read();
          out_data = in_data;
          local_A[c4][0] = out_data;
        }
      }
    }
}
/* Module Definition */

/* Module Definition */
void A_IO_L2_in(int idx, hls::stream<A_t16> &fifo_A_in, hls::stream<A_t16> &fifo_A_out, hls::stream<A_t2> &fifo_A_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  A_t16 local_A_ping[8][1];
  #pragma HLS RESOURCE variable=local_A_ping core=RAM_2P_BRAM
  A_t16 local_A_pong[8][1];
  #pragma HLS RESOURCE variable=local_A_pong core=RAM_2P_BRAM
  bool arb = 0;
  bool inter_trans_en = 1;
  bool intra_trans_en = 0;
  int c0, c0_prev;
  int c1, c1_prev;
  int c2, c2_prev;
  /* Variable Declaration */

  {
    for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
      for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
        for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
          // array
          // io_L3
          {
            if (arb == 0) {
              A_IO_L2_in_inter_trans(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_A_pong, 
                /* fifo */ fifo_A_in, 
                /* fifo */ fifo_A_out, 
                /* enable */ inter_trans_en
              );
              A_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_A_ping, 
                /* fifo */ fifo_A_local_out, 
                /* enable */ intra_trans_en
              );
            } else {
              A_IO_L2_in_inter_trans(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_A_ping, 
                /* fifo */ fifo_A_in, 
                /* fifo */ fifo_A_out, 
                /* enable */ inter_trans_en
              );
              A_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_A_pong, 
                /* fifo */ fifo_A_local_out, 
                /* enable */ intra_trans_en
              );
            }
            intra_trans_en = 1;
            arb = !arb;
            c0_prev = c0;
            c1_prev = c1;
            c2_prev = c2;
          }
        }
    if (arb == 0) {
      A_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_A_ping, 
        /* fifo */ fifo_A_local_out, 
        /* enable */ intra_trans_en
      );
    } else {
      A_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_A_pong, 
        /* fifo */ fifo_A_local_out, 
        /* enable */ intra_trans_en
      );
    }
  }
}
/* Module Definition */

/* Module Definition */
void A_IO_L2_in_boundary(int idx, hls::stream<A_t16> &fifo_A_in, hls::stream<A_t2> &fifo_A_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  A_t16 local_A_ping[8][1];
  #pragma HLS RESOURCE variable=local_A_ping core=RAM_2P_BRAM
  A_t16 local_A_pong[8][1];
  #pragma HLS RESOURCE variable=local_A_pong core=RAM_2P_BRAM
  bool arb = 0;
  bool inter_trans_en = 1;
  bool intra_trans_en = 0;
  int c0, c0_prev;
  int c1, c1_prev;
  int c2, c2_prev;
  /* Variable Declaration */

  {
    for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
      for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
        for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
          // array
          // io_L3
          {
            if (arb == 0) {
              A_IO_L2_in_inter_trans_boundary(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_A_pong, 
                /* fifo */ fifo_A_in, 
                /* enable */ inter_trans_en
              );
              A_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_A_ping, 
                /* fifo */ fifo_A_local_out, 
                /* enable */ intra_trans_en
              );
            } else {
              A_IO_L2_in_inter_trans_boundary(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_A_ping, 
                /* fifo */ fifo_A_in, 
                /* enable */ inter_trans_en
              );
              A_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_A_pong, 
                /* fifo */ fifo_A_local_out, 
                /* enable */ intra_trans_en
              );
            }
            intra_trans_en = 1;
            arb = !arb;
            c0_prev = c0;
            c1_prev = c1;
            c2_prev = c2;
          }
        }
    if (arb == 0) {
      A_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_A_ping, 
        /* fifo */ fifo_A_local_out, 
        /* enable */ intra_trans_en
      );
    } else {
      A_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_A_pong, 
        /* fifo */ fifo_A_local_out, 
        /* enable */ intra_trans_en
      );
    }
  }
}
/* Module Definition */

/* Module Definition */
void B_IO_L3_in(hls::stream<B_t16> &fifo_B_in, hls::stream<B_t16> &fifo_B_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
      for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
        // array
        // io_L3
        for (ap_uint<2> c3 = 0; c3 <= 1; c3 += 1) {
          // io_L2
          for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
          #pragma HLS PIPELINE II=1
            // access_coalesce
            // access_serialize
            {
              B_t16 in_data;
              B_t16 out_data;
              in_data = fifo_B_in.read();
              out_data = in_data;
              fifo_B_local_out.write(out_data);
            }
          }
        }
      }
}
/* Module Definition */

/* Module Definition */
void B_IO_L3_in_serialize(B_t16 *B, hls::stream<B_t16> &fifo_B_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<11> i = 0; i < 1024; i++) {
  #pragma HLS PIPELINE II=1
    B_t16 fifo_data;
    fifo_data = B[i];
    fifo_B_local_out.write(fifo_data);
  }
}
/* Module Definition */

/* Module Definition */
void B_IO_L2_in_intra_trans(int idx, int c0, int c1, int c2, B_t16 local_B[8][1], hls::stream<B_t2> &fifo_B_local_out, bool intra_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  B_t2 data_split[8];
  #pragma HLS ARRAY_PARTITION variable=data_split complete
  /* Variable Declaration */

  if (!intra_trans_en) return;


  // io_L2
  // io_L1
  // pe
  for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
    // latency
    for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
      // latency
      for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
      #pragma HLS PIPELINE II=1
        // simd
        {
          B_t16 in_data;
          B_t2 out_data;
          in_data = local_B[c6][2 * c5 / 16];
          for (ap_uint<4> n = 0; n < 8; n++) {
          #pragma HLS UNROLL
            data_split[n] = in_data(63, 0);
            in_data = in_data >> 64;
          }
          int split_idx = (c5) % 8;
          out_data = data_split[split_idx];
          fifo_B_local_out.write(out_data);
        }
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void B_IO_L2_in_inter_trans(int idx, int c0, int c1, int c2, B_t16 local_B[8][1], hls::stream<B_t16> &fifo_B_in, hls::stream<B_t16> &fifo_B_out, bool inter_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  if (!inter_trans_en) return;

  for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1) {
    // io_L2
    if (c3 == p0) {
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          B_t16 in_data;
          B_t16 out_data;
          in_data = fifo_B_in.read();
          out_data = in_data;
          local_B[c4][0] = out_data;
        }
      }
    } else {
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          B_t16 in_data;
          B_t16 out_data;
          in_data = fifo_B_in.read();
          out_data = in_data;
          fifo_B_out.write(out_data);
        }
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void B_IO_L2_in_inter_trans_boundary(int idx, int c0, int c1, int c2, B_t16 local_B[8][1], hls::stream<B_t16> &fifo_B_in, bool inter_trans_en) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  if (!inter_trans_en) return;

  for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1)
    if (c3 == p0) {
      // io_L2
      for (ap_uint<4> c4 = 0; c4 <= 7; c4 += 1) {
      #pragma HLS PIPELINE II=1
        // access_coalesce
        {
          B_t16 in_data;
          B_t16 out_data;
          in_data = fifo_B_in.read();
          out_data = in_data;
          local_B[c4][0] = out_data;
        }
      }
    }
}
/* Module Definition */

/* Module Definition */
void B_IO_L2_in(int idx, hls::stream<B_t16> &fifo_B_in, hls::stream<B_t16> &fifo_B_out, hls::stream<B_t2> &fifo_B_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  B_t16 local_B_ping[8][1];
  #pragma HLS RESOURCE variable=local_B_ping core=RAM_2P_BRAM
  B_t16 local_B_pong[8][1];
  #pragma HLS RESOURCE variable=local_B_pong core=RAM_2P_BRAM
  bool arb = 0;
  bool inter_trans_en = 1;
  bool intra_trans_en = 0;
  int c0, c0_prev;
  int c1, c1_prev;
  int c2, c2_prev;
  /* Variable Declaration */

  {
    for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
      for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
        for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
          // array
          // io_L3
          {
            if (arb == 0) {
              B_IO_L2_in_inter_trans(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_B_pong, 
                /* fifo */ fifo_B_in, 
                /* fifo */ fifo_B_out, 
                /* enable */ inter_trans_en
              );
              B_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_B_ping, 
                /* fifo */ fifo_B_local_out, 
                /* enable */ intra_trans_en
              );
            } else {
              B_IO_L2_in_inter_trans(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_B_ping, 
                /* fifo */ fifo_B_in, 
                /* fifo */ fifo_B_out, 
                /* enable */ inter_trans_en
              );
              B_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_B_pong, 
                /* fifo */ fifo_B_local_out, 
                /* enable */ intra_trans_en
              );
            }
            intra_trans_en = 1;
            arb = !arb;
            c0_prev = c0;
            c1_prev = c1;
            c2_prev = c2;
          }
        }
    if (arb == 0) {
      B_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_B_ping, 
        /* fifo */ fifo_B_local_out, 
        /* enable */ intra_trans_en
      );
    } else {
      B_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_B_pong, 
        /* fifo */ fifo_B_local_out, 
        /* enable */ intra_trans_en
      );
    }
  }
}
/* Module Definition */

/* Module Definition */
void B_IO_L2_in_boundary(int idx, hls::stream<B_t16> &fifo_B_in, hls::stream<B_t2> &fifo_B_local_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  B_t16 local_B_ping[8][1];
  #pragma HLS RESOURCE variable=local_B_ping core=RAM_2P_BRAM
  B_t16 local_B_pong[8][1];
  #pragma HLS RESOURCE variable=local_B_pong core=RAM_2P_BRAM
  bool arb = 0;
  bool inter_trans_en = 1;
  bool intra_trans_en = 0;
  int c0, c0_prev;
  int c1, c1_prev;
  int c2, c2_prev;
  /* Variable Declaration */

  {
    for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
      for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
        for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
          // array
          // io_L3
          {
            if (arb == 0) {
              B_IO_L2_in_inter_trans_boundary(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_B_pong, 
                /* fifo */ fifo_B_in, 
                /* enable */ inter_trans_en
              );
              B_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_B_ping, 
                /* fifo */ fifo_B_local_out, 
                /* enable */ intra_trans_en
              );
            } else {
              B_IO_L2_in_inter_trans_boundary(
                /* module id */ idx, 
                /* host iter */ c0, 
                /* host iter */ c1, 
                /* host iter */ c2, 
                /* array */ local_B_ping, 
                /* fifo */ fifo_B_in, 
                /* enable */ inter_trans_en
              );
              B_IO_L2_in_intra_trans(
                /* module id */ idx, 
                /* host iter */ c0_prev, 
                /* host iter */ c1_prev, 
                /* host iter */ c2_prev, 
                /* array */ local_B_pong, 
                /* fifo */ fifo_B_local_out, 
                /* enable */ intra_trans_en
              );
            }
            intra_trans_en = 1;
            arb = !arb;
            c0_prev = c0;
            c1_prev = c1;
            c2_prev = c2;
          }
        }
    if (arb == 0) {
      B_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_B_ping, 
        /* fifo */ fifo_B_local_out, 
        /* enable */ intra_trans_en
      );
    } else {
      B_IO_L2_in_intra_trans(
        /* module id */ idx, 
        /* host iter */ c0_prev, 
        /* host iter */ c1_prev, 
        /* host iter */ c2_prev, 
        /* array */ local_B_pong, 
        /* fifo */ fifo_B_local_out, 
        /* enable */ intra_trans_en
      );
    }
  }
}
/* Module Definition */

/* Module Definition */
void PE(int idx, int idy, hls::stream<A_t2> &fifo_A_in, hls::stream<A_t2> &fifo_A_out, hls::stream<B_t2> &fifo_B_in, hls::stream<B_t2> &fifo_B_out, hls::stream<float> &fifo_C_drain_out) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  A_t1 local_A[1][2];
  #pragma HLS ARRAY_PARTITION variable=local_A dim=0 complete
  B_t1 local_B[1][2];
  #pragma HLS ARRAY_PARTITION variable=local_B dim=0 complete
  C_t1 local_C[8][8];
  #pragma HLS RESOURCE variable=local_C core=RAM_2P_BRAM
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
      for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
        // array
        // pe
        for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
          // latency
          for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
            // latency
            for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
            #pragma HLS PIPELINE II=1
              {
                {
                  A_t2 fifo_data;
                  fifo_data = fifo_A_in.read();
                  for (ap_uint<2> n = 0; n < 2; n++) {
                  #pragma HLS UNROLL
                    union {unsigned int ui; float ut;} u;
                    u.ui = (unsigned int)fifo_data(31, 0);
                    local_A[0][n] = u.ut;
                    fifo_data = fifo_data >> 32;
                  }
                }
                {
                  B_t2 fifo_data;
                  fifo_data = fifo_B_in.read();
                  for (ap_uint<2> n = 0; n < 2; n++) {
                  #pragma HLS UNROLL
                    union {unsigned int ui; float ut;} u;
                    u.ui = (unsigned int)fifo_data(31, 0);
                    local_B[0][n] = u.ut;
                    fifo_data = fifo_data >> 32;
                  }
                }
                // simd
                for (ap_uint<2> c8 = 0; c8 <= 1; c8 += 1) {
                #pragma HLS UNROLL
                  local_C[c7][c6] = (local_C[c7][c6] + (local_A[0][c8] * local_B[0][c8]));
                }
                if (c2 == 3 && c5 == 7)
                  fifo_C_drain_out.write(local_C[c7][c6]);
                {
                  B_t2 fifo_data;
                  union {unsigned int ui; float ut;} u1, u0;
                  u1.ut = local_B[0][1];
                  u0.ut = local_B[0][0];
                  fifo_data = (ap_uint<32>(u1.ui), ap_uint<32>(u0.ui));
                  fifo_B_out.write(fifo_data);
                }
                {
                  A_t2 fifo_data;
                  union {unsigned int ui; float ut;} u1, u0;
                  u1.ut = local_A[0][1];
                  u0.ut = local_A[0][0];
                  fifo_data = (ap_uint<32>(u1.ui), ap_uint<32>(u0.ui));
                  fifo_A_out.write(fifo_data);
                }
              }
            }
          }
        }
      }
}
/* Module Definition */

/* Module Definition */
void PE_wrapper(int idx, int idy, hls::stream<A_t2> &fifo_A_in, hls::stream<A_t2> &fifo_A_out, hls::stream<B_t2> &fifo_B_in, hls::stream<B_t2> &fifo_B_out, hls::stream<float> &fifo_C_drain_out)
 {
  PE(
    /* module id */ idx, 
    /* module id */ idy, 
    /* fifo */ fifo_A_in, 
    /* fifo */ fifo_A_out, 
    /* fifo */ fifo_B_in, 
    /* fifo */ fifo_B_out, 
    /* fifo */ fifo_C_drain_out);
}
/* Module Definition */

/* Module Definition */
void A_PE_dummy_in(int idx, int idy, hls::stream<A_t2> &fifo_A_in) {
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
      for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
        // array
        // pe
        for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
          // latency
          for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
            // latency
            for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
            #pragma HLS PIPELINE II=1
              A_t2 fifo_data;
              fifo_data = fifo_A_in.read();
            }
          }
        }
      }
}
/* Module Definition */

/* Module Definition */
void B_PE_dummy_in(int idx, int idy, hls::stream<B_t2> &fifo_B_in) {
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1)
      for (ap_uint<3> c2 = 0; c2 <= 3; c2 += 1) {
        // array
        // pe
        for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
          // latency
          for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
            // latency
            for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
            #pragma HLS PIPELINE II=1
              B_t2 fifo_data;
              fifo_data = fifo_B_in.read();
            }
          }
        }
      }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_intra_trans(int idx, int idy, int c0, int c1, C_t4 local_C[8][2], hls::stream<float> &fifo_C_drain_local_in) {
#pragma HLS INLINE
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  ap_uint<32> data_split[4];
  #pragma HLS ARRAY_PARTITION variable=data_split complete
  /* Variable Declaration */


  // io_L1
  // pe
  // latency
  for (ap_uint<4> c6 = 0; c6 <= 7; c6 += 1) {
    // latency
    for (ap_uint<4> c7 = 0; c7 <= 7; c7 += 1) {
    #pragma HLS PIPELINE II=1
      // simd
      {
        C_t1 in_data;
        C_t4 out_data;
        in_data = fifo_C_drain_local_in.read();
        int split_idx = (c6) % 4;
        out_data = local_C[c7][c6 / 4];
        for (ap_uint<3> n = 0; n < 4; n++) {
        #pragma HLS UNROLL
          data_split[n] = out_data(31, 0);
          out_data = out_data >> 32;
        }
        union {unsigned int ui; float ut;} u;
        u.ut = in_data;
        data_split[split_idx] = ap_uint<32>(u.ui);
        out_data = (data_split[3], data_split[2], data_split[1], data_split[0]);        local_C[c7][c6 / 4] = out_data;
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_inter_trans(int idx, int idy, int c0, int c1, C_t4 local_C[8][2], hls::stream<C_t4> &fifo_C_drain_in, hls::stream<C_t4> &fifo_C_drain_out) {
#pragma HLS INLINE
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  /* Variable Declaration */

  for (ap_uint<2> c4 = p1; c4 <= 1; c4 += 1) {
    // io_L1
    if (c4 == p1) {
      for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
        // access_coalesce
        for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
        #pragma HLS PIPELINE II=1
          {
            C_t4 in_data;
            C_t4 out_data;
            in_data = local_C[c5][c6];
            out_data = in_data;
            fifo_C_drain_out.write(out_data);
          }
        }
      }
    } else {
      for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
        // access_coalesce
        for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
        #pragma HLS PIPELINE II=1
          {
            C_t4 in_data;
            C_t4 out_data;
            in_data = fifo_C_drain_in.read();
            out_data = in_data;
            fifo_C_drain_out.write(out_data);
          }
        }
      }
    }
  }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_inter_trans_boundary(int idx, int idy, int c0, int c1, C_t4 local_C[8][2], hls::stream<C_t4> &fifo_C_drain_out) {
#pragma HLS INLINE
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  /* Variable Declaration */

  for (ap_uint<2> c4 = p1; c4 <= 1; c4 += 1)
    if (c4 == p1) {
      // io_L1
      for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
        // access_coalesce
        for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
        #pragma HLS PIPELINE II=1
          {
            C_t4 in_data;
            C_t4 out_data;
            in_data = local_C[c5][c6];
            out_data = in_data;
            fifo_C_drain_out.write(out_data);
          }
        }
      }
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out(int idx, int idy, hls::stream<C_t4> &fifo_C_drain_in, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<float> &fifo_C_drain_local_in) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  C_t4 local_C[8][2];
  #pragma HLS RESOURCE variable=local_C core=RAM_2P_BRAM
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1) {
      // array
      // io_L3
      // io_L2
      C_drain_IO_L1_out_intra_trans(
        /* module id */ idx, 
        /* module id */ idy, 
        /* host iter */ c0, 
        /* host iter */ c1, 
        /* array */ local_C, 
        /* fifo */ fifo_C_drain_local_in
      );
      C_drain_IO_L1_out_inter_trans(
        /* module id */ idx, 
        /* module id */ idy, 
        /* host iter */ c0, 
        /* host iter */ c1, 
        /* array */ local_C, 
        /* fifo */ fifo_C_drain_in, 
        /* fifo */ fifo_C_drain_out
      );
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_wrapper(int idx, int idy, hls::stream<C_t4> &fifo_C_drain_in, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<float> &fifo_C_drain_local_in)
 {
  C_drain_IO_L1_out(
    /* module id */ idx, 
    /* module id */ idy, 
    /* fifo */ fifo_C_drain_in, 
    /* fifo */ fifo_C_drain_out, 
    /* fifo */ fifo_C_drain_local_in);
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_boundary(int idx, int idy, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<float> &fifo_C_drain_local_in) {
#pragma HLS INLINE
  /* Variable Declaration */
  int p0 = idx, p1 = idy; // module id
  C_t4 local_C[8][2];
  #pragma HLS RESOURCE variable=local_C core=RAM_2P_BRAM
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1) {
      // array
      // io_L3
      // io_L2
      C_drain_IO_L1_out_intra_trans(
        /* module id */ idx, 
        /* module id */ idy, 
        /* host iter */ c0, 
        /* host iter */ c1, 
        /* array */ local_C, 
        /* fifo */ fifo_C_drain_local_in
      );
      C_drain_IO_L1_out_inter_trans_boundary(
        /* module id */ idx, 
        /* module id */ idy, 
        /* host iter */ c0, 
        /* host iter */ c1, 
        /* array */ local_C, 
        /* fifo */ fifo_C_drain_out
      );
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L1_out_boundary_wrapper(int idx, int idy, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<float> &fifo_C_drain_local_in)
 {
  C_drain_IO_L1_out_boundary(
    /* module id */ idx, 
    /* module id */ idy, 
    /* fifo */ fifo_C_drain_out, 
    /* fifo */ fifo_C_drain_local_in);
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L2_out(int idx, hls::stream<C_t4> &fifo_C_drain_in, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<C_t4> &fifo_C_drain_local_in) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1) {
      // array
      // io_L3
      for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1) {
        // io_L2
        if (c3 == p0) {
          for (ap_uint<2> c4 = 0; c4 <= 1; c4 += 1) {
            // io_L1
            for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
              // access_coalesce
              for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
              #pragma HLS PIPELINE II=1
                {
                  C_t4 in_data;
                  C_t4 out_data;
                  in_data = fifo_C_drain_local_in.read();
                  out_data = in_data;
                  fifo_C_drain_out.write(out_data);
                }
              }
            }
          }
        } else {
          for (ap_uint<2> c4 = 0; c4 <= 1; c4 += 1) {
            // io_L1
            for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
              // access_coalesce
              for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
              #pragma HLS PIPELINE II=1
                {
                  C_t4 in_data;
                  C_t4 out_data;
                  in_data = fifo_C_drain_in.read();
                  out_data = in_data;
                  fifo_C_drain_out.write(out_data);
                }
              }
            }
          }
        }
      }
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L2_out_boundary(int idx, hls::stream<C_t4> &fifo_C_drain_out, hls::stream<C_t4> &fifo_C_drain_local_in) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  int p0 = idx; // module id
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1) {
      // array
      // io_L3
      for (ap_uint<2> c3 = p0; c3 <= 1; c3 += 1)
        if (c3 == p0) {
          // io_L2
          for (ap_uint<2> c4 = 0; c4 <= 1; c4 += 1) {
            // io_L1
            for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
              // access_coalesce
              for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
              #pragma HLS PIPELINE II=1
                {
                  C_t4 in_data;
                  C_t4 out_data;
                  in_data = fifo_C_drain_local_in.read();
                  out_data = in_data;
                  fifo_C_drain_out.write(out_data);
                }
              }
            }
          }
        }
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L3_out(hls::stream<C_t4> &fifo_C_drain_out, hls::stream<C_t4> &fifo_C_drain_local_in) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<3> c0 = 0; c0 <= 3; c0 += 1)
    for (ap_uint<3> c1 = 0; c1 <= 3; c1 += 1) {
      // array
      // io_L3
      for (ap_uint<2> c3 = 0; c3 <= 1; c3 += 1) {
        // io_L2
        for (ap_uint<2> c4 = 0; c4 <= 1; c4 += 1) {
          // io_L1
          for (ap_uint<4> c5 = 0; c5 <= 7; c5 += 1) {
            // access_coalesce
            // access_serialize
            for (ap_uint<2> c6 = 0; c6 <= 1; c6 += 1) {
            #pragma HLS PIPELINE II=1
              {
                C_t4 in_data;
                C_t4 out_data;
                in_data = fifo_C_drain_local_in.read();
                out_data = in_data;
                fifo_C_drain_out.write(out_data);
              }
            }
          }
        }
      }
    }
}
/* Module Definition */

/* Module Definition */
void C_drain_IO_L3_out_serialize(C_t16 *C, hls::stream<C_t4> &fifo_C_drain_local_in) {
#pragma HLS INLINE OFF
  /* Variable Declaration */
  /* Variable Declaration */

  for (ap_uint<9> i = 0; i < 256; i++) {
  #pragma HLS PIPELINE II=1
    C_t4 fifo_data;
    C_t16 mem_data;
    C_t4 mem_data_split[4];
    #pragma HLS ARRAY_PARTITION variable=mem_data_split complete
    for (ap_uint<3> p = 0; p < 4; p++) {
      fifo_data = fifo_C_drain_local_in.read();
      mem_data_split[p] = fifo_data;
    }
    mem_data = (mem_data_split[3], mem_data_split[2], mem_data_split[1], mem_data_split[0]);
    C[i] = mem_data;
  }
}
/* Module Definition */

void kernel0(A_t16 *A, B_t16 *B, C_t16 *C)
{
#pragma HLS INTERFACE m_axi port=A offset=slave bundle=gmem_A
#pragma HLS INTERFACE m_axi port=B offset=slave bundle=gmem_B
#pragma HLS INTERFACE m_axi port=C offset=slave bundle=gmem_C
#pragma HLS INTERFACE s_axilite port=A bundle=control
#pragma HLS INTERFACE s_axilite port=B bundle=control
#pragma HLS INTERFACE s_axilite port=C bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

#pragma HLS DATAFLOW

  /* FIFO Declaration */
  /* A_IO_L3_in_serialize fifo */ hls::stream<A_t16> fifo_A_A_IO_L3_in_serialize;
  #pragma HLS STREAM variable=fifo_A_A_IO_L3_in_serialize depth=2
  /* B_IO_L3_in_serialize fifo */ hls::stream<B_t16> fifo_B_B_IO_L3_in_serialize;
  #pragma HLS STREAM variable=fifo_B_B_IO_L3_in_serialize depth=2
  /* C_drain_IO_L3_out_serialize fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L3_out_serialize;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L3_out_serialize depth=2
  /* A_IO_L2_in fifo */ hls::stream<A_t16> fifo_A_A_IO_L2_in_0;
  #pragma HLS STREAM variable=fifo_A_A_IO_L2_in_0 depth=2
  #pragma HLS RESOURCE variable=fifo_A_A_IO_L2_in_0 core=FIFO_SRL
  /* A_IO_L2_in fifo */ hls::stream<A_t16> fifo_A_A_IO_L2_in_1;
  #pragma HLS STREAM variable=fifo_A_A_IO_L2_in_1 depth=2
  #pragma HLS RESOURCE variable=fifo_A_A_IO_L2_in_1 core=FIFO_SRL
  /* A_IO_L2_in fifo */ hls::stream<A_t16> fifo_A_A_IO_L2_in_2;
  #pragma HLS STREAM variable=fifo_A_A_IO_L2_in_2 depth=2
  #pragma HLS RESOURCE variable=fifo_A_A_IO_L2_in_2 core=FIFO_SRL
  /* B_IO_L2_in fifo */ hls::stream<B_t16> fifo_B_B_IO_L2_in_0;
  #pragma HLS STREAM variable=fifo_B_B_IO_L2_in_0 depth=2
  #pragma HLS RESOURCE variable=fifo_B_B_IO_L2_in_0 core=FIFO_SRL
  /* B_IO_L2_in fifo */ hls::stream<B_t16> fifo_B_B_IO_L2_in_1;
  #pragma HLS STREAM variable=fifo_B_B_IO_L2_in_1 depth=2
  #pragma HLS RESOURCE variable=fifo_B_B_IO_L2_in_1 core=FIFO_SRL
  /* B_IO_L2_in fifo */ hls::stream<B_t16> fifo_B_B_IO_L2_in_2;
  #pragma HLS STREAM variable=fifo_B_B_IO_L2_in_2 depth=2
  #pragma HLS RESOURCE variable=fifo_B_B_IO_L2_in_2 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_0_0;
  #pragma HLS STREAM variable=fifo_A_PE_0_0 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_0_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_0_1;
  #pragma HLS STREAM variable=fifo_A_PE_0_1 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_0_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_0_2;
  #pragma HLS STREAM variable=fifo_A_PE_0_2 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_0_2 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_1_0;
  #pragma HLS STREAM variable=fifo_A_PE_1_0 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_1_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_1_1;
  #pragma HLS STREAM variable=fifo_A_PE_1_1 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_1_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<A_t2> fifo_A_PE_1_2;
  #pragma HLS STREAM variable=fifo_A_PE_1_2 depth=2
  #pragma HLS RESOURCE variable=fifo_A_PE_1_2 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_0_0;
  #pragma HLS STREAM variable=fifo_B_PE_0_0 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_0_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_1_0;
  #pragma HLS STREAM variable=fifo_B_PE_1_0 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_1_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_2_0;
  #pragma HLS STREAM variable=fifo_B_PE_2_0 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_2_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_0_1;
  #pragma HLS STREAM variable=fifo_B_PE_0_1 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_0_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_1_1;
  #pragma HLS STREAM variable=fifo_B_PE_1_1 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_1_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<B_t2> fifo_B_PE_2_1;
  #pragma HLS STREAM variable=fifo_B_PE_2_1 depth=2
  #pragma HLS RESOURCE variable=fifo_B_PE_2_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<float> fifo_C_drain_PE_0_0;
  #pragma HLS STREAM variable=fifo_C_drain_PE_0_0 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_PE_0_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<float> fifo_C_drain_PE_1_0;
  #pragma HLS STREAM variable=fifo_C_drain_PE_1_0 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_PE_1_0 core=FIFO_SRL
  /* PE fifo */ hls::stream<float> fifo_C_drain_PE_0_1;
  #pragma HLS STREAM variable=fifo_C_drain_PE_0_1 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_PE_0_1 core=FIFO_SRL
  /* PE fifo */ hls::stream<float> fifo_C_drain_PE_1_1;
  #pragma HLS STREAM variable=fifo_C_drain_PE_1_1 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_PE_1_1 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_0_0;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_0_0 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_0_0 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_0_1;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_0_1 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_0_1 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_0_2;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_0_2 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_0_2 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_1_0;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_1_0 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_1_0 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_1_1;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_1_1 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_1_1 core=FIFO_SRL
  /* C_drain_IO_L1_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L1_out_1_2;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L1_out_1_2 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L1_out_1_2 core=FIFO_SRL
  /* C_drain_IO_L2_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L2_out_0;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L2_out_0 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L2_out_0 core=FIFO_SRL
  /* C_drain_IO_L2_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L2_out_1;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L2_out_1 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L2_out_1 core=FIFO_SRL
  /* C_drain_IO_L2_out fifo */ hls::stream<C_t4> fifo_C_drain_C_drain_IO_L2_out_2;
  #pragma HLS STREAM variable=fifo_C_drain_C_drain_IO_L2_out_2 depth=2
  #pragma HLS RESOURCE variable=fifo_C_drain_C_drain_IO_L2_out_2 core=FIFO_SRL
  /* FIFO Declaration */

  /* Module Call */
  A_IO_L3_in_serialize(
    /* array */ A,
    /* fifo */ fifo_A_A_IO_L3_in_serialize
  );
  /* Module Call */

  /* Module Call */
  A_IO_L3_in(
    /* fifo */ fifo_A_A_IO_L3_in_serialize,
    /* fifo */ fifo_A_A_IO_L2_in_0
  );
  /* Module Call */

  /* Module Call */
  A_IO_L2_in(
    /* module id */ 0,
    /* fifo */ fifo_A_A_IO_L2_in_0,
    /* fifo */ fifo_A_A_IO_L2_in_1,
    /* fifo */ fifo_A_PE_0_0
  );
  /* Module Call */

  /* Module Call */
  A_IO_L2_in_boundary(
    /* module id */ 1,
    /* fifo */ fifo_A_A_IO_L2_in_1,
    /* fifo */ fifo_A_PE_1_0
  );
  /* Module Call */

  /* Module Call */
  B_IO_L3_in_serialize(
    /* array */ B,
    /* fifo */ fifo_B_B_IO_L3_in_serialize
  );
  /* Module Call */

  /* Module Call */
  B_IO_L3_in(
    /* fifo */ fifo_B_B_IO_L3_in_serialize,
    /* fifo */ fifo_B_B_IO_L2_in_0
  );
  /* Module Call */

  /* Module Call */
  B_IO_L2_in(
    /* module id */ 0,
    /* fifo */ fifo_B_B_IO_L2_in_0,
    /* fifo */ fifo_B_B_IO_L2_in_1,
    /* fifo */ fifo_B_PE_0_0
  );
  /* Module Call */

  /* Module Call */
  B_IO_L2_in_boundary(
    /* module id */ 1,
    /* fifo */ fifo_B_B_IO_L2_in_1,
    /* fifo */ fifo_B_PE_0_1
  );
  /* Module Call */

  /* Module Call */
  PE_wrapper(
    /* module id */ 0,
    /* module id */ 0,
    /* fifo */ fifo_A_PE_0_0,
    /* fifo */ fifo_A_PE_0_1,
    /* fifo */ fifo_B_PE_0_0,
    /* fifo */ fifo_B_PE_1_0,
    /* fifo */ fifo_C_drain_PE_0_0
  );
  /* Module Call */

  /* Module Call */
  PE_wrapper(
    /* module id */ 0,
    /* module id */ 1,
    /* fifo */ fifo_A_PE_0_1,
    /* fifo */ fifo_A_PE_0_2,
    /* fifo */ fifo_B_PE_0_1,
    /* fifo */ fifo_B_PE_1_1,
    /* fifo */ fifo_C_drain_PE_0_1
  );
  /* Module Call */

  /* Module Call */
  PE_wrapper(
    /* module id */ 1,
    /* module id */ 0,
    /* fifo */ fifo_A_PE_1_0,
    /* fifo */ fifo_A_PE_1_1,
    /* fifo */ fifo_B_PE_1_0,
    /* fifo */ fifo_B_PE_2_0,
    /* fifo */ fifo_C_drain_PE_1_0
  );
  /* Module Call */

  /* Module Call */
  PE_wrapper(
    /* module id */ 1,
    /* module id */ 1,
    /* fifo */ fifo_A_PE_1_1,
    /* fifo */ fifo_A_PE_1_2,
    /* fifo */ fifo_B_PE_1_1,
    /* fifo */ fifo_B_PE_2_1,
    /* fifo */ fifo_C_drain_PE_1_1
  );
  /* Module Call */

  /* Module Call */
  A_PE_dummy_in(
    /* module id */ 0,
    /* module id */ 1,
    /* fifo */ fifo_A_PE_0_2
  );
  /* Module Call */

  /* Module Call */
  A_PE_dummy_in(
    /* module id */ 1,
    /* module id */ 1,
    /* fifo */ fifo_A_PE_1_2
  );
  /* Module Call */

  /* Module Call */
  B_PE_dummy_in(
    /* module id */ 1,
    /* module id */ 0,
    /* fifo */ fifo_B_PE_2_0
  );
  /* Module Call */

  /* Module Call */
  B_PE_dummy_in(
    /* module id */ 1,
    /* module id */ 1,
    /* fifo */ fifo_B_PE_2_1
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L1_out_boundary_wrapper(
    /* module id */ 0,
    /* module id */ 1,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_0_1,
    /* fifo */ fifo_C_drain_PE_1_0
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L1_out_wrapper(
    /* module id */ 0,
    /* module id */ 0,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_0_1,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_0_0,
    /* fifo */ fifo_C_drain_PE_0_0
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L1_out_boundary_wrapper(
    /* module id */ 1,
    /* module id */ 1,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_1_1,
    /* fifo */ fifo_C_drain_PE_1_1
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L1_out_wrapper(
    /* module id */ 1,
    /* module id */ 0,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_1_1,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_1_0,
    /* fifo */ fifo_C_drain_PE_0_1
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L2_out_boundary(
    /* module id */ 1,
    /* fifo */ fifo_C_drain_C_drain_IO_L2_out_1,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_1_0
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L2_out(
    /* module id */ 0,
    /* fifo */ fifo_C_drain_C_drain_IO_L2_out_1,
    /* fifo */ fifo_C_drain_C_drain_IO_L2_out_0,
    /* fifo */ fifo_C_drain_C_drain_IO_L1_out_0_0
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L3_out(
    /* fifo */ fifo_C_drain_C_drain_IO_L3_out_serialize,
    /* fifo */ fifo_C_drain_C_drain_IO_L2_out_0
  );
  /* Module Call */

  /* Module Call */
  C_drain_IO_L3_out_serialize(
    /* array */ C,
    /* fifo */ fifo_C_drain_C_drain_IO_L3_out_serialize
  );
  /* Module Call */

}
