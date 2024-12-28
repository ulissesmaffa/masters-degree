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
        for(l=0;l<offset_end-offset_start+ARRAY_SIZE;l++){
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
        for(l=0;l<offset_end-offset_start+ARRAY_SIZE;l++){
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

void new_feed_buffer_A(int row, int col, int *addr, int stride, SA& sa){
    int i,j;
    int k,l,offset_start;
    int new_col=row-1+col;
    int offset_end=new_col-col;
    
    stride=stride+col;

    //feed buffer A (Lateral)
    printf("NEW FEED BUFFER A\n");
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
            printf("%i ",*(addr+j));
            sa.addToBufferA(i,*(addr+j));
        }
        //inserir zeros no final caso necessário
        for(l=0;l<offset_end-offset_start+ARRAY_SIZE;l++){
            printf("0 ");
            sa.addToBufferA(i,0);          
        }
        offset_start++;
        addr=addr+stride;
        printf("\n");
    }
}

void new_feed_buffer_B(int row, int col, int *addr, int stride, SA& sa){
    int i,j,k,l,offset_start;
    int new_col=row-1+col;
    int offset_end=new_col-row;
    
    stride=stride+col;

    int m_aux[row][col];

    printf("NEW FEED BUFFER B\n");

    //transformar em matriz
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            m_aux[i][j]=*(addr+j);
        }
        addr=addr+stride;
    }

    //feed b antigo
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
            printf("%i ",m_aux[i][j]);
            sa.addToBufferB(j,m_aux[i][j]);
        }
        //inserir zeros no final caso necessário
        for(l=0;l<offset_end-offset_start+ARRAY_SIZE;l++){
            printf("0 ");
            sa.addToBufferB(j,0);
        }
        offset_start++;
        printf("\n");
    }
}

int main() {
    SA sa;
    int row,col,cycles,stride,*addr;
    sa.reset();

    int memory[] = 
    {
        0, 0, 5,  30, 21,  7, 0, 0,  0,  0,  0,  4, 82, 71,  2,  0,  0,  0,  0, 0, //matriz A stride 5 - inicio [2]
        3, 5, 0, 0, 0, 0, 7, 9, 0, 0, 0, 0, 10, 21, 0, 0, 0, 0, 32, 1, //matriz B stride 4 - inicio [20]
        1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 5, 6, 7, 0, 0, 0, 8, 9, 10, 0, 0 //Matrizes A e B com strides de 3 - inicio A [40] B[50]

    };

    switch(ARRAY_SIZE){
        case 2:{ //ARRAY 2X2
            //EXEMPLO COM MEMÓRIA E MATRIZES DIFERENTES
                row=2;
                col=4;
                stride=5;
                addr=&memory[2];

                new_feed_buffer_A(row,col,addr,stride,sa);
        
                row=4;
                col=2;
                stride=4;
                addr=&memory[20];
                new_feed_buffer_B(row,col,addr,stride,sa);

                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);

            //EXEMPLO COM MEMÓRIA E MATRIZ QUADRADA
                row=2;
                col=2;
                stride=3;
                addr=&memory[40];
                new_feed_buffer_A(row,col,addr,stride,sa);
        
                row=2;
                col=2;
                stride=3;
                addr=&memory[50];
                new_feed_buffer_B(row,col,addr,stride,sa);

                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);
            /*MÉTODO ANTIGO
            //EXEMPLO 1 - matrix_1 e matrix_2 = 2x2
                vector<vector<int>> A={{1,2},{3,4}};
                row=2;
                col=2;
                feed_buffer_A(row,col,A,sa);

                vector<vector<int>> B={{5,6},{7,8}};
                row=2;
                col=2;
                feed_buffer_B(row,col,B,sa);
                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);

            //EXEMPLO 2 - matrix_1 e matrix_2 = 2x2
                row=2;
                col=2;
                vector<vector<int>> C={{3,45},{32,4}};
                feed_buffer_A(row,col,C,sa);

                row=2;
                col=2;
                vector<vector<int>> D={{89,12},{132,1}};
                feed_buffer_B(row,col,D,sa);
                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);


            //EXEMPLO 3 - matrix_1 (2x4) e matrix_2 (4x2)
                row=2;
                col=4;
                vector<vector<int>> E={{5,30,21,7},{4,82,71,2}};
                feed_buffer_A(row,col,E,sa);

                row=4;
                col=2;
                vector<vector<int>> F={{3,5},{7,9},{10,21},{32,1}};
                feed_buffer_B(row,col,F,sa);
                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);
            */
            break;           
        }
        case 3:{ //ARRAY 3X3
            printf("EXEMPLO: ARRAY 3X3 COM DUAS MATRIZES 3X3\n");
            row=3;
            col=3;
            vector<vector<int>> X={{1,2,3},{4,5,6},{7,8,9}};
            feed_buffer_A(row,col,X,sa);

            row=3;
            col=3;
            vector<vector<int>> Y={{1,2,3},{4,5,6},{7,-8,9}};
            feed_buffer_B(row,col,Y,sa);
            cycles=row-1+col+ARRAY_SIZE;
            run_test(cycles,sa);
            
            break;
        }
        case 4:{ //ARRAY 4X4
                //EXEMPLO 4 
                printf("EXEMPLO 4: ARRAY 4X4 COM DUAS MATRIZES 4X4\n");
                row=4;
                col=4;
                vector<vector<int>> A={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
                feed_buffer_A(row,col,A,sa);

                row=4;
                col=4;
                vector<vector<int>> B={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
                feed_buffer_B(row,col,B,sa);
                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);

                //EXEMPLO 5
                printf("EXEMPLO 5: ARRAY 4X4 COM DUAS MATRIZES 4X4\n");
                row=4;
                col=4;
                vector<vector<int>> C={{1,2,3,4},{5,6,7,8},{9,32,2,3},{4,5,-9,7}};
                feed_buffer_A(row,col,C,sa);

                row=4;
                col=4;
                vector<vector<int>> D={{1,2,3,31},{5,6,7,8},{9,1,12,3},{4,5,6,7}};
                feed_buffer_B(row,col,D,sa);
                cycles=row-1+col+ARRAY_SIZE;
                run_test(cycles,sa);

            break;
        }
            
        default:
            break;
    }

    return 0;
}
