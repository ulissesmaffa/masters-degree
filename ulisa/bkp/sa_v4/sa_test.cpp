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
                if(i==0){
                    sa.addToBufferA_li00(0);
                    //printf("i=%i addToBufferA_li00(0)\n",i);
                }else{
                    sa.addToBufferA_li10(0);
                    //printf("i=%i addToBufferA_li10(0)\n",i);
                }
            }
        }
        //inserir matriz invertida
        for(j=col-1;j>=0;j--){
            printf("%i ",m[i][j]);
            if(i==0){
                sa.addToBufferA_li00(m[i][j]);
                //printf("i=%i addToBufferA_li00(%i)\n",i,m[i][j]);
            }else{
                sa.addToBufferA_li10(m[i][j]);
                //printf("i=%i addToBufferA_li10(%i)\n",i,m[i][j]);
            }
        }
        //inserir zeros no final caso necessário
        for(l=0;l<offset_end-offset_start+2;l++){
            printf("0 ");          
            if(i==0){
                sa.addToBufferA_li00(0);
                //printf("i=%i addToBufferA_li00(0)\n",i);
            }else{
                sa.addToBufferA_li10(0);
                //printf("i=%i addToBufferA_li10(0)\n",i);
            }
        }
        offset_start++;
        printf("\n");
    }
    //sa.showBuffers();
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
                if(j==0){
                    sa.addToBufferB_tw00(0);
                    //printf("j=%i addToBufferB_tw00(0)\n",j);
                }else{
                    sa.addToBufferB_tw01(0);
                    //printf("j=%i addToBufferB_tw01(0)\n",j);
                }
            }
        }
        //inserir matriz invertida
        for(i=row-1;i>=0;i--){
            printf("%i ",m[i][j]);
            if(j==0){
                sa.addToBufferB_tw00(m[i][j]);
                //printf("j=%i addToBufferB_tw00(%i)\n",j,m[i][j]);
            }else{
                sa.addToBufferB_tw01(m[i][j]);
                //printf("j=%i addToBufferB_tw01(%i)\n",j,m[i][j]);
            }
        }
        //inserir zeros no final caso necessário
        for(l=0;l<offset_end-offset_start+2;l++){
            printf("0 ");
            if(j==0){
                sa.addToBufferB_tw00(0);
                //printf("j=%i addToBufferB_tw00(0)\n",j);
            }else{
                sa.addToBufferB_tw01(0);
                //printf("j=%i addToBufferB_tw01(0)\n",j);
            }
        }
        offset_start++;
        printf("\n");
    }
    //sa.showBuffers();
}

void run_test(int length, SA& sa){

    int i;

    for(int i=0;i<length;i++){
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
    int row,col;
    sa.reset();

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

    return 0;
}
