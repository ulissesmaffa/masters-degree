#include <stdio.h>
#include "loop_de_for.h"

void loop_init(LDF *ldf) {
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            ldf->ba_loop[i][j]=0;
        }
    }
}

void loop_compute(LDF *ldf){

}

void loop_show_ba(LDF *ldf) {
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",ldf->ba_loop[i][j]);
        }
        printf("\n");
    }
}