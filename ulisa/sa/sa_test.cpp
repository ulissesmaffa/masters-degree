#include <stdio.h>
#include <iostream>

#include <hls_stream.h>

#include "sa.h"


using namespace std;

int main(int argc, char **argv)
{
    int err_cnt = 0;
/*=================  PE 00  ================================ */
    hls::stream<AXI_VALUE_mat> tw00_stream;
    hls::stream<AXI_VALUE_res> ta00_stream;
    hls::stream<AXI_VALUE_mat> li00_stream;
    hls::stream<AXI_VALUE_mat> ri00_stream;
    hls::stream<AXI_VALUE_mat> bw00_stream;
    hls::stream<AXI_VALUE_res> ba00_stream; 
    //PESO
    hls::stream<AXI_VALUE_mat> w00_stream;
/*=================  PE 01  ================================ */
    hls::stream<AXI_VALUE_mat> tw01_stream;
    hls::stream<AXI_VALUE_res> ta01_stream;
    hls::stream<AXI_VALUE_mat> ri01_stream;
    hls::stream<AXI_VALUE_mat> bw01_stream;
    hls::stream<AXI_VALUE_res> ba01_stream; 
    //PESO
    hls::stream<AXI_VALUE_mat> w01_stream;
/*=================  PE 10  ================================ */
    hls::stream<AXI_VALUE_mat> li10_stream;
    hls::stream<AXI_VALUE_mat> ri10_stream;
    hls::stream<AXI_VALUE_mat> bw10_stream;
    hls::stream<AXI_VALUE_res> ba10_stream; 
    //PESO
    hls::stream<AXI_VALUE_mat> w10_stream;
/*=================  PE 11  ================================ */
    hls::stream<AXI_VALUE_mat> ri11_stream;
    hls::stream<AXI_VALUE_mat> bw11_stream;
    hls::stream<AXI_VALUE_res> ba11_stream; 
    //PESO
    hls::stream<AXI_VALUE_mat> w11_stream;

    AXI_VALUE_res aValue_res;

/*=================  INICIO INSERIR PESOS ================= */
    {
        AXI_VALUE_mat aValue_mat;
        union {
            unsigned char oval;
            char ival;
        } converter_mat_to_bus;

        converter_mat_to_bus.ival = 5;
        aValue_mat.data = converter_mat_to_bus.oval;
        w00_stream.write(aValue_mat);
/*
        converter_mat_to_bus.ival = 6; 
        aValue_mat.data = converter_mat_to_bus.oval;
        w01_stream.write(aValue_mat);

        converter_mat_to_bus.ival = 7;
        aValue_mat.data = converter_mat_to_bus.oval;
        w10_stream.write(aValue_mat);

        converter_mat_to_bus.ival = 8; 
        aValue_mat.data = converter_mat_to_bus.oval;
        w11_stream.write(aValue_mat);
*/
    }
/*================= FIM FIM INSERIR PESOS =================*/

    //PE 01
    pe(
        li00_stream,
        ri00_stream,
        tw00_stream,
        bw00_stream,
        ta00_stream,
        ba00_stream,
        w00_stream);
    
    //PE 10
    pe(
        li10_stream,
        ri10_stream,
        bw00_stream,
        bw10_stream,
        ba00_stream,
        ba10_stream,
        w10_stream);
    
    //PE 01
    pe(
        ri00_stream,
        ri01_stream,
        tw01_stream,
        bw01_stream,
        ta01_stream,
        ba01_stream,
        w01_stream);

    //PE 11
    pe(
        ri10_stream,
        ri11_stream,
        bw01_stream,
        bw11_stream,
        ba01_stream,
        ba11_stream,
        w11_stream);

/*================== LEITURA ======================*/
    {
        AXI_VALUE_mat aValue_mat;

        union {
            unsigned char ival;
            char oval;
        } converter_bus_to_mat;

        w00_stream.read(aValue_mat);
        converter_bus_to_mat.ival = aValue_mat.data;    
        printf("W00 %d\r\n", converter_bus_to_mat.oval);

    }

    return err_cnt;
}
