#include <stdio.h>
#include <iostream>
#include <hls_stream.h>
#include "sa.h"


using namespace std;

void read_ba(hls::stream<AXI_VALUE_res>& stream, const char* nome_stream);
void insert_into_two_streams(
    hls::stream<AXI_VALUE_mat>& stream1, char value1, 
    hls::stream<AXI_VALUE_mat>& stream2, char value2);
 
int main(int argc, char **argv){
    int err_cnt = 0;
/*=================  PE 00  ================================ */
    hls::stream<AXI_VALUE_mat> tw00_stream;
    hls::stream<AXI_VALUE_mat> li00_stream;
    hls::stream<AXI_VALUE_mat> ri00_stream;
    hls::stream<AXI_VALUE_mat> bw00_stream;
    hls::stream<AXI_VALUE_res> ba00_stream; 
/*=================  PE 01  ================================ */
    hls::stream<AXI_VALUE_mat> tw01_stream;
    hls::stream<AXI_VALUE_mat> ri01_stream;
    hls::stream<AXI_VALUE_mat> bw01_stream;
    hls::stream<AXI_VALUE_res> ba01_stream; 
/*=================  PE 10  ================================ */
    hls::stream<AXI_VALUE_mat> li10_stream;
    hls::stream<AXI_VALUE_mat> ri10_stream;
    hls::stream<AXI_VALUE_mat> bw10_stream;
    hls::stream<AXI_VALUE_res> ba10_stream; 
/*=================  PE 11  ================================ */
    hls::stream<AXI_VALUE_mat> ri11_stream;
    hls::stream<AXI_VALUE_mat> bw11_stream;
    hls::stream<AXI_VALUE_res> ba11_stream; 

    AXI_VALUE_res aValue_res;

    /* INSERIR LATERAL LI */
    /*============= Primeiro Ciclo ==================*/
    insert_into_two_streams(li00_stream, 5, li10_stream, 0);
    /*============= Segundo Ciclo ==================*/
    insert_into_two_streams(li00_stream, 7, li10_stream, 6);
    /*============= Terceiro Ciclo ==================*/
    insert_into_two_streams(li00_stream, 0, li10_stream, 8);
    /*============= Quarto Ciclo ==================*/
    insert_into_two_streams(li00_stream, 0, li10_stream, 0);

    /* INSERIR TOP W */
    /*============= Primeiro Ciclo ==================*/
    insert_into_two_streams(tw00_stream, 1, tw01_stream, 0);
    /*============= Segundo Ciclo ==================*/
    insert_into_two_streams(tw00_stream, 2, tw01_stream, 3);
    /*============= Terceiro Ciclo ==================*/
    insert_into_two_streams(tw00_stream, 0, tw01_stream, 4);
    /*============= Quarto Ciclo ==================*/
    insert_into_two_streams(tw00_stream, 0, tw01_stream, 0);


    //PE 00
    pe(
        li00_stream,//li
        ri00_stream,//ri
        tw00_stream,//tw
        bw00_stream,//bw
        ba00_stream //ba
    );
    
    //PE 10
    pe(
        li10_stream,//li
        ri10_stream,//ri
        bw00_stream,//tw
        bw10_stream,//bw
        ba10_stream //ba
    );
    
    //PE 01
    pe(
        ri00_stream,//li
        ri01_stream,//ri
        tw01_stream,//tw
        bw01_stream,//bw
        ba01_stream);//ba

    //PE 11
    pe(
        ri10_stream,//li
        ri11_stream,//ri
        bw01_stream,//tw
        bw11_stream,//bw
        ba11_stream);//ba

    /* LEITURA SAÍDA ARRAY BOTTOM CICLO 1*/
    read_ba(ba00_stream, "BA00");
    read_ba(ba01_stream, "BA01");
    read_ba(ba10_stream, "BA10");
    read_ba(ba11_stream, "BA11");

    return err_cnt;
}

// Função para ler e imprimir o resultado de uma stream
void read_ba(hls::stream<AXI_VALUE_res>& stream, const char* name_stream) {
    AXI_VALUE_res aValue_res;
    union {
        unsigned short ival;
        short oval;
    } converter_bus_to_res;

    if (!stream.empty()) {  // Verifica se há dados na stream
        stream.read(aValue_res);
        converter_bus_to_res.ival = aValue_res.data;
        printf("%s: %d\r\n", name_stream, converter_bus_to_res.oval);
    } else {
        printf("%s: Stream vazia!\r\n", name_stream);
    }
}

// Função para inserir stream em dois fios
void insert_into_two_streams(
    hls::stream<AXI_VALUE_mat>& stream1, char value1, 
    hls::stream<AXI_VALUE_mat>& stream2, char value2) 
{
    AXI_VALUE_mat aValue_mat;
    union {
        unsigned char oval;
        char ival;
    } converter_mat_to_bus;

    // Write to the first stream
    converter_mat_to_bus.ival = value1;
    aValue_mat.data = converter_mat_to_bus.oval;
    stream1.write(aValue_mat);

    // Write to the second stream
    converter_mat_to_bus.ival = value2;
    aValue_mat.data = converter_mat_to_bus.oval;
    stream2.write(aValue_mat);
}
