#include "buffer.h"
#include <iostream>

BUFFER::BUFFER():li(0){
   #pragma HLS INTERFACE s_axilite port=li bundle=control
}

void BUFFER::simpleFunc(int value){
   li = value;
}
