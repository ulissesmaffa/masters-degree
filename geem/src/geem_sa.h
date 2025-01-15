#ifndef __SA_H__
#define __SA_H__

#include "geem_pe.h"
#include <stdbool.h> 

#define N 2 //Systolic Array Size

typedef struct{
    bool ready;
    int value;
} Buffer;

typedef struct {
    PE pe[N][N];
    Buffer buffer_a_li[N];
    Buffer buffer_b_tw[N];
    int ba_sa[N][N];
} SA;

void sa_init(SA *sa);
void sa_compute(SA *sa);
void sa_reset(SA *sa);
void sa_add_to_buffer_a(SA *sa, int i, int value);
void sa_add_to_buffer_b(SA *sa, int j, int value);
void sa_show_result(SA *sa);
void sa_save_results(SA *sa);

#endif



//void sa_top(SA *sa, int i, int value_a, int j, int value_b);