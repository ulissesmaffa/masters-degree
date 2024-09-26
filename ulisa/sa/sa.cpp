

#include "sa.h"
#include <iostream>

#include <assert.h>

using namespace hls;


void pe(
    hls::stream<AXI_VALUE_mat> &li_stream,
    hls::stream<AXI_VALUE_mat> &ri_stream,
    hls::stream<AXI_VALUE_mat> &tw_stream,
    hls::stream<AXI_VALUE_mat> &bw_stream,
    hls::stream<AXI_VALUE_res> &ta_stream,
    hls::stream<AXI_VALUE_res> &ba_stream) 
{

#pragma HLS INTERFACE axis      port=li_stream     name=SLI_AXIS
#pragma HLS INTERFACE axis      port=ri_stream     name=MRI_AXIS
#pragma HLS INTERFACE axis      port=tw_stream     name=STW_AXIS
#pragma HLS INTERFACE axis      port=bw_stream     name=MBW_AXIS
#pragma HLS INTERFACE axis      port=ta_stream     name=STA_AXIS
#pragma HLS INTERFACE axis      port=ba_stream     name=MBA_AXIS

#pragma HLS INTERFACE s_axilite port=return       bundle=CONTROL
//#pragma HLS ALLOCATION instances=DSP48 core

	char mat_li;
	char mat_ri;
	char mat_tw;
	char mat_bw;

	short res_ta;
	short res_ba;
	short prod_iw;

	#pragma HLS RESOURCE variable=res_ba core=Mul_LUT
	#pragma HLS RESOURCE variable=prod_iw core=Mul_LUT


    {
    	AXI_VALUE_mat aValue_mat;
        li_stream.read(aValue_mat);
        union { unsigned char ival; char oval; } converter_bus_to_mat;
        converter_bus_to_mat.ival = aValue_mat.data;
        mat_li = converter_bus_to_mat.oval;
    }

    {
    	AXI_VALUE_mat aValue_mat;
        tw_stream.read(aValue_mat);
        union { unsigned char ival; char oval; } converter_bus_to_mat;
        converter_bus_to_mat.ival = aValue_mat.data;
        mat_tw = converter_bus_to_mat.oval;
    }

    {
    	AXI_VALUE_res aValue_res;
        ta_stream.read(aValue_res);
        union { unsigned short ival; short oval; } converter_bus_to_res;
        converter_bus_to_res.ival = aValue_res.data;
        res_ta = converter_bus_to_res.oval;
    }

    mat_ri = mat_li;
    mat_bw = mat_tw;
    prod_iw = (mat_li * mat_tw);
    res_ba = res_ta + prod_iw;

    {
        AXI_VALUE_mat aValue_mat;
        union { unsigned char oval; char ival; } converter_mat_to_bus;
        converter_mat_to_bus.ival = mat_ri;
        aValue_mat.data = converter_mat_to_bus.oval;
        aValue_mat.last = 0;
        aValue_mat.strb = -1;
        aValue_mat.keep = 15; //e.strb;
        aValue_mat.user = 0;
        aValue_mat.id = 0;
        aValue_mat.dest = 0;
        ri_stream.write(aValue_mat);
	}


    {
        AXI_VALUE_mat aValue_mat;
        union { unsigned char oval; char ival; } converter_mat_to_bus;
        converter_mat_to_bus.ival = mat_bw;
        aValue_mat.data = converter_mat_to_bus.oval;
        aValue_mat.last = 0;
        aValue_mat.strb = -1;
        aValue_mat.keep = 15; //e.strb;
        aValue_mat.user = 0;
        aValue_mat.id = 0;
        aValue_mat.dest = 0;
        bw_stream.write(aValue_mat);
	}

    {
        AXI_VALUE_res aValue_res;
        union { unsigned short oval; short ival; } converter_res_to_bus;
        converter_res_to_bus.ival = res_ba;
        aValue_res.data = converter_res_to_bus.oval;
        aValue_res.last = 0;
        aValue_res.strb = -1;
        aValue_res.keep = 15; //e.strb;
        aValue_res.user = 0;
        aValue_res.id = 0;
        aValue_res.dest = 0;
        ba_stream.write(aValue_res);
	}

}

