#include <stdio.h>
#include <iostream>
#include <vector>
#include "sa.h"

typedef struct{
    int array_tw_00[6]={0,0,0,0};
    int array_tw_01[6]={0,0,0,0};
    int array_li_00[6]={0,0,0,0};
    int array_li_10[6]={0,0,0,0};
}sa_input;

void format_sa_input(
    int row_1, int col_1, const std::vector<std::vector<int>>& m_1, int length_1,
    int row_2, int col_2, const std::vector<std::vector<int>>& m_2, int length_2,
    sa_input *input, int size_inputs
){
    int i,j,k,l=0;

    //Organização matriz A entrada lateral
    int offset=0;
    for(i=0;i<row_1;i++){
        if(offset>0){
            for(k=0;k<offset;k++){
                printf("0 ");
                input->array_li_00[l]=0;
                l++;
            }
        }
        for(j=col_1-1;j>=0;j--){
            printf("%i ",m_1[i][j]);
            input->array_li_00[l]=m_1[i][j];
            l++;
        }
        for(k=0;k<length_1-offset;k++){
            printf("0 ");
            input->array_li_00[l]=0;
            l++;
        }
        offset++;
        printf("\n");
    }

    printf("array_li_00: ");
    for(i=0;i<4;i++){
        printf("%i ",input->array_li_00[i]);
    }
    printf("\n");
    printf("array_li_10: ");
    for(i=0;i<4;i++){
        printf("%i ",input->array_li_10[i]);
    }
    printf("\n");

    //Organização matriz B entrada superior
    /*int i,j;
    for(i=0;i<row_2;i++){
        for(j=col_2-1;j>=0;j--){
            printf("[%i][%i]:%i ",j,i,B[j][i]);
        }
        printf("\n");
    }*/
    offset=0;
    l=0;
    for(i=0;i<row_2;i++){
        if(offset>0){
            for(k=0;k<offset;k++){
                printf("0 ");
                input->array_tw_00[l]=0;
                l++;
            }
        }
        for(j=col_2-1;j>=0;j--){
            printf("%i ",m_2[j][i]);
            input->array_tw_00[l]=m_2[j][i];
            l++;
        }
        for(k=0;k<length_2-offset;k++){
            printf("0 ");
            input->array_tw_00[l]=0;
            l++;
        }
        offset++;
        printf("\n");
    }


    printf("array_tw_00: ");
    for(i=0;i<size_inputs;i++){
        printf("%i ",input->array_tw_00[i]);
    }
    printf("\n");
    printf("array_tw_01: ");
    for(i=0;i<size_inputs;i++){
        printf("%i ",input->array_tw_01[i]);
    }
    printf("\n");
}

void run_test(int length, sa_input *inputs, SA sa){

    int i;

    for(int i=0;i<length;i++){
        printf("Inserindo dados na topo do SA\n");
        sa.tw_sa_00 = inputs->array_tw_00[i];
        sa.tw_sa_01 = inputs->array_tw_01[i];

        printf("Inserindo dados na lateral do SA\n");
        sa.li_sa_00 = inputs->array_li_00[i];
        sa.li_sa_10 = inputs->array_li_10[i];

        printf("Computando [%i]...\n",i);
        sa.compute();
    }

    printf("BA_SA[00] = %d\n",static_cast<int>(sa.ba_sa_00));
    printf("BA_SA[01] = %d\n",static_cast<int>(sa.ba_sa_01));
    printf("BA_SA[10] = %d\n",static_cast<int>(sa.ba_sa_10));  
    printf("BA_SA[11] = %d\n",static_cast<int>(sa.ba_sa_11));

    sa.reset();


}

int main() {
    SA sa;
    sa_input sa_inputs;

    //EXEMPLO 1 - matrix_1 e matrix_2 = 2x2
    int row_1=2, col_1=2, row_2=2, col_2=2;
    int lenght_1=2, lenght_2=2;
    int size_inputs = 4;
/*    std::vector<std::vector<int>> A={{1,2},{3,4}};
    std::vector<std::vector<int>> B={{5,6},{7,8}};
    format_sa_input(row_1,col_1,A,lenght_1,row_2,col_2,B,lenght_2,&sa_inputs,size_inputs);
    int length=4;
    run_test(length,&sa_inputs,sa);
    
    //EXEMPLO 2 - matrix_1 e matrix_2 = 2x2
    row_1=2, col_1=2, row_2=2, col_2=2;
    lenght_1=2, lenght_2=2;
    std::vector<std::vector<int>> D={{3,45},{32,4}};
    std::vector<std::vector<int>> E={{89,12},{132,1}};
    format_sa_input(row_1,col_1,D,lenght_1,row_2,col_2,E,lenght_2,&sa_inputs,size_inputs);
    length=4;
    run_test(length,&sa_inputs,sa);
*/
    //EXEMPLO 3 - matrix_1 (2x4) e matrix_2 (4x2)
    row_1=2, col_1=4, row_2=2, col_2=4;
    lenght_1=2, lenght_2=2;
    std::vector<std::vector<int>> F={{5,30,21,7},{4,82,71,2}};
    std::vector<std::vector<int>> G={{3,5},{7,9},{10,21},{32,1}};
    size_inputs=6;
    format_sa_input(row_1,col_1,F,lenght_1,row_2,col_2,G,lenght_2,&sa_inputs,size_inputs);
    run_test(size_inputs,&sa_inputs,sa);

    return 0;
}
