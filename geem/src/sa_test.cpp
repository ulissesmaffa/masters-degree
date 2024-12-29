#include <stdio.h>
#include "sa.h"

int size_new_col(int col){
   int offset = N-1;
   return col+offset;
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
   int i,j,k,a,b,c,w,value_a,value_b;

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
        printf("\nInsert Buffer B: ");
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
    for(k=0;k<extra-w;k++){
        printf("\nInsert Buffer A: ");
        for(i=0;i<N;i++){
            sa.addToBufferA(i,0);
            printf("li_%i[%i]=%d ",i,w,0);
        }

        printf("\nInsert Buffer B: ");
        for(j=0;j<N;j++){
            sa.addToBufferB(j,0);
            printf("tw_%i[%i]=%d ",j,w,0);
        }
        printf("\n");
        printf("Computing SA wave [%i]\n",w); 
        sa.compute();
        w++;
    }

    //SHOW RESULT  
    sa.showResult();
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
      0, 0, 1, 2, 3, 0, 0, 4, 5, 6, //matriz A1 2x3 - inicio:end(21) com stride=2
      0, 7, 8, 0, 9, 10, 0, 11, 12, 0, //matriz B1 3x2 - inicio:end(30) com stride=1
      5, 2, 7, 10, 0, 0, 0, -3, -1, 4, -3, 0, 0, 0, 0, 1, 24, 3, //matriz A2 3x4 - inicio:end(39) com stride=3
      -1, 3, 15, 0, 0, 0, 0, 7, 2, 22, 0, 0, 0, 0, 21, -30, 55, 0, 0, 0, 0, 7, 1, 0, 99, 99 //matriz B2 4x3 - inicio:end(57) com stride=4
   };

    printf("COMPUTE SA WAVES FUNCTION: SA %iX%i\n",N,N);
    compute_sa_waves(
        2,3,&memory[21],2,
        3,2,&memory[30],1,
        sa
    );

    return 0;
}
