#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue> 
#include "sa.h"

using namespace std;

void feed_buffer_A(int row, int col, const vector<vector<int>>& m, SA& sa){
    int i,j,k,l,offset_start;
    int new_col=row-1+col;
    int offset_end=new_col-col;
    
    //feed buffer A (Lateral)
    printf("FEED BUFFER A\n");
    offset_start=0;
    for(i=0;i<row;i++){
        //inserir zeros no inicio caso necessário
        if(offset_start>0){
            for(k=0;k<offset_start;k++){
                printf("0 ");
                sa.addToBufferA(i,0);
            }
        }
        //inserir matriz invertida
        for(j=col-1;j>=0;j--){
            printf("%i ",m[i][j]);
            sa.addToBufferA(i,m[i][j]);
        }
        //inserir zeros no final caso necessário
        for(l=0;l<offset_end-offset_start+4;l++){
            printf("0 ");
            sa.addToBufferA(i,0);          
        }
        offset_start++;
        printf("\n");
    }
}

void feed_buffer_B(int row, int col, const vector<vector<int>>& m, SA& sa){
    int i,j,k,l,offset_start;
    int new_col=row-1+col;
    int offset_end=new_col-row;

    printf("FEED BUFFER B\n");
    offset_start=0;
    for(j=0;j<col;j++){
        //inserir zeros no inicio caso necessário
        if(offset_start>0){
            for(k=0;k<offset_start;k++){
                printf("0 ");
                sa.addToBufferB(j,0);
            }
        }
        //inserir matriz invertida
        for(i=row-1;i>=0;i--){
            printf("%i ",m[i][j]);
            sa.addToBufferB(j,m[i][j]);
        }
        //inserir zeros no final caso necessário
        //AJUSTAR: offset_end-offset_start + NUMERO
        for(l=0;l<offset_end-offset_start+4;l++){
            printf("0 ");
            sa.addToBufferB(j,0);
        }
        offset_start++;
        printf("\n");
    }
}

void run_test(int length, SA& sa){

    int i,j;

    for(int i=0;i<length;i++){
        printf("Computando [%i]...\n",i);
        sa.compute();
    }

    for(i=0;i<ARRAY_SIZE;i++){
        for(j=0;j<ARRAY_SIZE;j++){
            printf("BA_SA[%i][%i] = %d\n",i,j,static_cast<int>(sa.ba_sa[i][j]));
        }
    }

    sa.reset();
}

int main() {
    SA sa;
    int row,col;
    sa.reset();

    switch(ARRAY_SIZE){
        case 2:{ //ARRAY 2X2
            //EXEMPLO 1 - matrix_1 e matrix_2 = 2x2
                vector<vector<int>> A={{1,2},{3,4}};
                row=2;
                col=2;
                feed_buffer_A(row,col,A,sa);

                vector<vector<int>> B={{5,6},{7,8}};
                row=2;
                col=2;
                feed_buffer_B(row,col,B,sa);
                run_test(4,sa);

            //EXEMPLO 2 - matrix_1 e matrix_2 = 2x2
                row=2;
                col=2;
                vector<vector<int>> C={{3,45},{32,4}};
                feed_buffer_A(row,col,C,sa);

                row=2;
                col=2;
                vector<vector<int>> D={{89,12},{132,1}};
                feed_buffer_B(row,col,D,sa);
                run_test(4,sa);

            //EXEMPLO 3 - matrix_1 (2x4) e matrix_2 (4x2)
                row=2;
                col=4;
                vector<vector<int>> E={{5,30,21,7},{4,82,71,2}};
                feed_buffer_A(row,col,E,sa);

                row=4;
                col=2;
                vector<vector<int>> F={{3,5},{7,9},{10,21},{32,1}};
                feed_buffer_B(row,col,F,sa);
                run_test(6,sa);

            break;           
        }
        case 4:{ //ARRAY 4X4
            //EXEMPLO 4 - ARRAY DEVE SER 4X4 
                row=4;
                col=4;
                vector<vector<int>> A={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
                feed_buffer_A(row,col,A,sa);

                row=4;
                col=4;
                vector<vector<int>> B={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
                feed_buffer_B(row,col,B,sa);
                //sa.showBuffers();
                run_test(12,sa); //ARRUMAR O NÚMERO 12 DEVE SER IDENTIFICAVEL

            break;
        }
            
        default:
            break;
    }

    return 0;
}
