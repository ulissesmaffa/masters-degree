#include<stdio.h>
#include "geem_sa.h"

void sa_init(SA *sa) {
    int i,j;

    for(i=0;i<N;i++){
        sa->buffer_a_li[i].ready = 0;
        sa->buffer_b_tw[i].ready = 0;
        for(j=0;j<N;j++){
            pe_init(&sa->pe[i][j]);
            sa->ba_sa[i][j] = 0;
        }
    }
}

void sa_add_to_buffer_a(SA *sa, int i, int value) {
    if(i<N){
        sa->buffer_a_li[i].value = value;
        sa->buffer_a_li[i].ready = 1;
    }
}

void sa_add_to_buffer_b(SA *sa, int j, int value) {
    if(j<N){
        sa->buffer_b_tw[j].value = value;
        sa->buffer_b_tw[j].ready = 1;
    }
}

void sa_compute(SA *sa) {
    int i,j;

    // 1. Verifica se todos os buffers da interface lateral (li) estão prontos
    for(i=0;i<N;i++){
        if(!sa->buffer_a_li[i].ready){
            printf("Buffer_a_li[%d] não está pronto ainda.\n", i);
            return;
        }
    }

    // 2. Verifica se todos os buffers da interface superior (tw) estão prontos
    for(j=0;j<N;j++){
        if(!sa->buffer_b_tw[j].ready){
            printf("Buffer_b_tw[%d] não está pronto ainda.\n", j);
            return;
        }
    }

    // 3. Carrega entradas laterais (li) buffer A
    for(i=0;i<N;i++){
        sa->pe[i][0].li = sa->buffer_a_li[i].value;
        sa->buffer_a_li[i].ready = 0;
    }

    // 4. Carrega entradas superiores (tw) buffer B
    for(j=0;j<N;j++){
        sa->pe[0][j].tw = sa->buffer_b_tw[j].value;
        sa->buffer_b_tw[j].ready = 0;
    }

    // 5. Conexões horizontais. Pular primeira coluna
    for(i=0;i<N;i++){
        for(j=1;j<N;j++){
            sa->pe[i][j].li = sa->pe[i][j - 1].ri;
        }
    }

    // 6. Conexões verticais. Pular primeira linha
    for(i=1;i<N;i++) {
        for(j=0;j<N;j++) {
            sa->pe[i][j].tw = sa->pe[i - 1][j].bw;
        }
    }

    // 7. Computar PE unitariamente.
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            pe_compute(&sa->pe[i][j]);
        }
    }

    /*
    Inutilizado, função específica que salva
    // 8. Atualiza acumuladores SA
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            sa->ba_sa[i][j] = sa->pe[i][j].ba;
        }
    }
    */
}

void sa_reset(SA *sa) {
    int i,j;

    for (i=0;i<N;i++) {
        sa->buffer_a_li[i].ready = 0;
        sa->buffer_b_tw[i].ready = 0;

        for (j=0;j<N;j++) {
            pe_reset(&sa->pe[i][j]);
            //sa->ba_sa[i][j] = 0;
        }
    }
}


void sa_show_result(SA *sa){
    int i,j;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%d ", sa->ba_sa[i][j]);
            //printf("%d ", sa->pe[i][j].ba);
        }
        printf("\n");
    }
}

void sa_save_results(SA *sa){
    int i,j;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            sa->ba_sa[i][j] = sa->pe[i][j].ba;
        }
    }  
}

/*
void sa_top(SA *sa, int i, int value_a, int j, int value_b) {
    sa_compute(sa);
    sa_add_to_buffer_a(sa, i, value_a);
    sa_add_to_buffer_b(sa, j, value_b);
    sa_reset(sa);
    sa_show_result(sa);
}
*/