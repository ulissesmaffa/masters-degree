#include <stdio.h>
#include <iostream>

#include <hls_stream.h>

#include "sa.h"


using namespace std;


//----------------------------------------------------
int mainxxxxxx(int argc, char **argv)
{
    int err_cnt = 0;


    hls::stream<AXI_VALUE_mat> li_stream;
    hls::stream<AXI_VALUE_mat> ri_stream;
    hls::stream<AXI_VALUE_mat> tw_stream;
    hls::stream<AXI_VALUE_mat> bw_stream;
    hls::stream<AXI_VALUE_res> ta_stream;
    hls::stream<AXI_VALUE_res> ba_stream; 

    AXI_VALUE_res aValue_res;

    {
        AXI_VALUE_mat aValue_mat;
        union {
            unsigned char oval;
            char ival;
        } converter_mat_to_bus;

        converter_mat_to_bus.ival = 37;
        aValue_mat.data = converter_mat_to_bus.oval;

        li_stream.write(aValue_mat);
    }

    {
        AXI_VALUE_mat aValue_mat;
        union {
            unsigned char oval;
            char ival;
        } converter_mat_to_bus;

        converter_mat_to_bus.ival = -25;
        aValue_mat.data = converter_mat_to_bus.oval;

        tw_stream.write(aValue_mat);
    }

    {
        AXI_VALUE_res aValue_res;
        union {
            unsigned short oval;
            short ival;
        } converter_res_to_bus;

        converter_res_to_bus.ival = 13;
        aValue_res.data = converter_res_to_bus.oval;

        ta_stream.write(aValue_res);
    }


    pe(
        li_stream,
        ri_stream,
        tw_stream,
        bw_stream,
        ta_stream,
        ba_stream);

    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        ri_stream.read(aValue_mat);

        converter_bus_to_mat.ival = aValue_mat.data;    

        printf("RI %d\r\n", converter_bus_to_mat.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        bw_stream.read(aValue_mat);

        converter_bus_to_mat.ival = aValue_mat.data;    

        printf("BW %d\r\n", converter_bus_to_mat.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

   {
        AXI_VALUE_res aValue_res;

        union {
            unsigned short ival;
            short oval;
        } converter_bus_to_res;

        ba_stream.read(aValue_res);

        converter_bus_to_res.ival = aValue_res.data;    

        printf("BA %d\r\n", converter_bus_to_res.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

    return err_cnt;
}


//----------------------------------------------------
int main(int argc, char **argv)
{
    int err_cnt = 0;


    hls::stream<AXI_VALUE_mat> li00_stream;
    hls::stream<AXI_VALUE_mat> ri00_stream;

    hls::stream<AXI_VALUE_mat> li10_stream;
    hls::stream<AXI_VALUE_mat> ri10_stream;

    hls::stream<AXI_VALUE_mat> tw00_stream;
    hls::stream<AXI_VALUE_mat> bw00_stream;
    hls::stream<AXI_VALUE_res> ta00_stream;
    hls::stream<AXI_VALUE_res> ba00_stream; 

    hls::stream<AXI_VALUE_mat> bw10_stream;
    hls::stream<AXI_VALUE_res> ba10_stream; 


    AXI_VALUE_res aValue_res;

    {
        AXI_VALUE_mat aValue_mat;
        union {
            unsigned char oval;
            char ival;
        } converter_mat_to_bus;

        converter_mat_to_bus.ival = 37;
        aValue_mat.data = converter_mat_to_bus.oval;

        li00_stream.write(aValue_mat);

        converter_mat_to_bus.ival = -6;
        aValue_mat.data = converter_mat_to_bus.oval;

        li10_stream.write(aValue_mat);

    }

    {
        AXI_VALUE_mat aValue_mat;
        union {
            unsigned char oval;
            char ival;
        } converter_mat_to_bus;

        converter_mat_to_bus.ival = -25;
        aValue_mat.data = converter_mat_to_bus.oval;

        tw00_stream.write(aValue_mat);

        converter_mat_to_bus.ival = 8;
        aValue_mat.data = converter_mat_to_bus.oval;

        tw00_stream.write(aValue_mat);

    }

    {
        AXI_VALUE_res aValue_res;
        union {
            unsigned short oval;
            short ival;
        } converter_res_to_bus;

        converter_res_to_bus.ival = 0;
        aValue_res.data = converter_res_to_bus.oval;

        ta00_stream.write(aValue_res);

        converter_res_to_bus.ival = 0;
        aValue_res.data = converter_res_to_bus.oval;

        ta00_stream.write(aValue_res);

    }


    pe(
        li00_stream,
        ri00_stream,
        tw00_stream,
        bw00_stream,
        ta00_stream,
        ba00_stream);



    pe(
        li10_stream,
        ri10_stream,
        bw00_stream,
        bw10_stream,
        ba00_stream,
        ba10_stream);


    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        ri00_stream.read(aValue_mat);

        converter_bus_to_mat.ival = aValue_mat.data;    

        printf("RI00 %d\r\n", converter_bus_to_mat.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        ri10_stream.read(aValue_mat);

        converter_bus_to_mat.ival = aValue_mat.data;    

        printf("RI10 %d\r\n", converter_bus_to_mat.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        bw10_stream.read(aValue_mat);

        converter_bus_to_mat.ival = aValue_mat.data;    

        printf("BW10 %d\r\n", converter_bus_to_mat.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

   {
        AXI_VALUE_res aValue_res;

        union {
            unsigned short ival;
            short oval;
        } converter_bus_to_res;

        ba10_stream.read(aValue_res);

        converter_bus_to_res.ival = aValue_res.data;    

        printf("BA10 %d\r\n", converter_bus_to_res.oval);
        // if ( converter_bus_to_mat.oval != mat_ri ) {
        //     err_cnt ++;
        // }
    }

    return err_cnt;
}


