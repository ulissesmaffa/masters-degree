#ifndef __SA_PE_H__
#define __SA_PE_H__

#include <cmath>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include "ap_int.h"

using namespace std;


typedef ap_axiu< 8,4,5,5> AXI_VALUE_mat; // 8-->data, 4  -->user, 4  -->id, 5  -->dest
typedef ap_axiu<16,4,5,5> AXI_VALUE_res; //16-->data, 4  -->user, 4  -->id, 5  -->dest


void pe(
    hls::stream<AXI_VALUE_mat> &li_stream,
    hls::stream<AXI_VALUE_mat> &ri_stream,
    hls::stream<AXI_VALUE_mat> &tw_stream,
    hls::stream<AXI_VALUE_mat> &bw_stream,
    hls::stream<AXI_VALUE_res> &ta_stream,
    hls::stream<AXI_VALUE_res> &ba_stream);


#endif /* __SA_PE_H__ */
