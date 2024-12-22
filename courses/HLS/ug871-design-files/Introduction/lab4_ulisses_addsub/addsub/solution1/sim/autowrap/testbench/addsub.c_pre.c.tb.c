// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub.c"
# 1 "/home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub.c" 2
# 1 "/home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub.h" 1



typedef int data_t;

void addsub(
   data_t a,
   data_t b,
   data_t *c
   );
# 2 "/home/ulisses/Projects/masters-degree/courses/HLS/ug871-design-files/Introduction/lab4_ulisses/addsub.c" 2

void addsub(
   data_t a,
   data_t b,
   data_t *c
   ) {

   *c=a+b;
}
