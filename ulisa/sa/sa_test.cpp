#include <stdio.h>
#include "sa.h"

int size_new_col(int col){
   int offset = N-1;
   return col+offset;
}

void run_test(int length, SA& sa){

    int i,j;

    for(int i=0;i<length;i++){
        printf("Computando [%i]...\n",i);
        sa.compute();
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("BA_SA[%i][%i] = %d\n",i,j,static_cast<int>(sa.ba_sa[i][j]));
        }
    }

    sa.reset();
}

//Função é responsável por buscar lateral, superior e depois computar
void compute_sa_waves(
      int row_a, 
      int col_a, 
      int *addr_a, 
      int stride_a,
      int row_b, 
      int col_b, 
      int *addr_b, 
      int stride_b,
      SA& sa
   ){

   stride_a=stride_a+col_a; //ajuste do stride
   stride_b=stride_b+col_b; //ajuste do stride
   int offset=N-1;
   //int new_col=col+offset;
   int new_col_a = size_new_col(col_a);
   int i,j,a,b,c,w,value_a,value_b;

   //ITERAÇÃO POR ONDAS, CADA ONDA, IMPRIME UM ELEMENTO DE CADA ENTRADA
    for(w=0;w<new_col_a;w++){
        //ITERAÇÃO INTERFACE LATERAL
        printf("\nInsert Buffer A: ");
        for(i=0;i<N;i++){
            int *line_base_a = addr_a + i * stride_a; 
            if(w<i){
                //REGIÃO QUE INICIA COM ZEROS
                value_a=0;
            }else if(w<i+col_a){
                //LATERAL REGIÃO DE BUSCA DA MATRIZ 
                value_a=*(line_base_a + col_a - 1 - (w - i)); 
            }else{
                //REGIÃO QUE TERMINA COM ZEROS
                value_a=0;
            }
            //INSERT BUFFER A
            sa.addToBufferA(i,value_a);
            printf("li_%i[%i]=%d ",i,w,value_a);
        }

        //ITERAÇÃO INTERFACE SUPERIOR
        printf("Insert Buffer B: ");
        for(j=0;j<N;j++){
            int *line_base_b = addr_b + (stride_b*(row_b-1)) - (stride_b*(w-j)); 
            if(w<j){
                //REGIÃO QUE INICIA COM ZEROS
                value_b=0;
            }else if(w<j+row_b){
                //LATERAL REGIÃO DE BUSCA DA MATRIZ 
                value_b=*(line_base_b + j); 
            }else{
                //REGIÃO QUE TERMINA COM ZEROS
                value_b=0;
            }
            //INSERT BUFFER B
            sa.addToBufferB(j,value_b);
            printf("tw_%i[%i]=%d ",j,w,value_b);
        }

        printf("\n");
        //COMPUTE SA  
        printf("Computing SA wave [%i]\n",w);  
        sa.compute();
    } 
    
    //É NECESSÁRIO UMA REVISÃO NESTA PARTE, PODE SER MELHORADO AINDA...
    //Ciclos extras para finalizar computação SA
    //calcular quantos ciclos extras
    int extra=row_b-1+col_b+N;
    //preencher com zero buffers e computa
    for(i=0;i<extra-w;i++){
        sa.addToBufferA(i,0);
        sa.addToBufferB(i,0);
        sa.compute();
    }

    //SHOW RESULT   
    printf("\nShowing result:\n"); 
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("BA_SA[%i][%i] = %d\n",i,j,sa.ba_sa[i][j]);
        }
    }
}

int main() {
    int row_a, col_a, *addr_a, stride_a;
    int row_b, col_b, *addr_b, stride_b;
    int new_col_a;
    int new_col_b;
    int w;
    SA sa;

    sa.reset();

    int memory[] = 
   {
      1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 9, 10, 11, 12, 0, 13, 14, 15, 16,
      0, 0, 1, 2, 3, 0, 0, 4, 5, 6, //matriz A com stride=2
      0, 7, 8, 0, 9, 10, 0, 11, 12, 0, //matriz B com stride=1
      1, 2, 3, 99, 99, 4, 5, 6, 99, 99, 7, 8, 9, 99, 99, 10, 11, 12 
   };


    switch(N){
        case 2:{ //ARRAY 2X2
            printf("COMPUTE SA WAVES FUNCTION: SA %iX%i\n",N,N);
            row_a = 2;
            col_a = 3;
            addr_a = &memory[21];
            stride_a = 2;
            new_col_a = size_new_col(col_a);

            row_b = 3;
            col_b = 2;
            addr_b = &memory[30];
            stride_b = 1;
            new_col_b = size_new_col(row_b);

            compute_sa_waves(
                row_a,col_a,addr_a,stride_a,
                row_b,col_b,addr_b,stride_b,
                sa
            );

            /*
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

                cycles=row-1+col+N;
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
            */
            break;           
        }
        case 3:{ //ARRAY 3X3         
            break;
        }
        case 4:{ //ARRAY 4X4
            break;
        }
            
        default:
            break;
    }

    return 0;
}
