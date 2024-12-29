// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/ulisses/Projects/masters-degree/geem/src/pe.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ulisses/Projects/masters-degree/geem/src/pe.cpp"
# 1 "/home/ulisses/Projects/masters-degree/geem/src/pe.h" 1



class PE {

    public:

        int li;
        int tw;
        int ri;
        int bw;
        int ba;

        PE();

        void compute();
        void reset();
    };
# 2 "/home/ulisses/Projects/masters-degree/geem/src/pe.cpp" 2

PE::PE():li(0),tw(0),ri(0),bw(0),ba(0){}

void PE::compute() {
    ri = li;
    bw = tw;
    ba += li * tw;
}

void PE::reset(){
    ba = 0;
}
