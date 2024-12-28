#include <stdio.h>

#define N 2

int size_new_col(int col){
   int offset = N-1;
   return col+offset;
}

//Função de busca lateral com loop
void compute_sa_buffer(
      int row, 
      int col, 
      int *addr, 
      int stride
   ){

   stride=stride+col; //ajuste do stride
   int i,j,a,b,c;
   int offset=N-1;

   //LOOP DE INSERÇÃO LATERAL
   for(i=0;i<N;i++){
      //ZERO ANTES  
      for(a=0;a<i;a++){
         printf("0 ");
      }
      //INSERE MATRIZ INVERTIDA
      for(b=col-1;b>=0;b--){
         printf("%i ",*(addr+b));
      }
      //INSERE ZERO FINAL
      for(c=0;c<offset-i;c++){
         printf("0 ");
      }
      //ATUALIZA ADDR COM STRIDE
      addr=addr+stride;
      printf("\n");
   }
   
}

//Função busca lateral apenas, por ondas, mais controle
void wave_search_side(
      int row, 
      int col, 
      int *addr, 
      int stride,
      int w
   ){

   stride=stride+col; //ajuste do stride
   int i,a,b,c,value;

   //ITERAÇÃO INTERFACE LATERAL
   for(i=0;i<N;i++){
      int *line_base = addr + i * stride; 
      if(w<i){
         //REGIÃO QUE INICIA COM ZEROS
         value=0;
      }else if(w<i+col){
         //LATERAL REGIÃO DE BUSCA DA MATRIZ 
         int reversed_idx = col - 1 - (w - i);
         value=*(line_base + reversed_idx); 
      }else{
         //REGIÃO QUE TERMINA COM ZEROS
         value=0;
      }
      //INSERE BUFFER (i,value)
      printf("%d ", value);
   }
}

//Função busca lateral apenas, por ondas, mais controle
void wave_search_top(
      int row, 
      int col, 
      int *addr, 
      int stride,
      int w
   ){

   stride=stride+col; //ajuste do stride
   int j,a,b,c,value;

   //ITERAÇÃO INTERFACE SUPERIOR
   for(j=0;j<N;j++){
      int *line_base = addr + (stride*(row-1)) - (stride*(w-j)); 
      if(w<j){
         //REGIÃO QUE INICIA COM ZEROS
         value=0;
      }else if(w<j+row){
         //LATERAL REGIÃO DE BUSCA DA MATRIZ 
         value=*(line_base + j); 
      }else{
         //REGIÃO QUE TERMINA COM ZEROS
         value=0;
      }
      //INSERE BUFFER (j,value)
      printf("%d ", value);
   }
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
      int stride_b
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
         //INSERE BUFFER (i,value)
         printf("li_%i[%i]=%d ",i,w,value_a);
      }

      //ITERAÇÃO INTERFACE SUPERIOR
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
         //INSERE BUFFER (j,value)
         printf("tw_%i[%i]=%d ",j,w,value_b);
      }


      printf("\n");
   }
   
}


int main(){

   int memory[] = 
   {
      1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 9, 10, 11, 12, 0, 13, 14, 15, 16,
      0, 0, 1, 2, 3, 0, 0, 4, 5, 6, //matriz A com stride=2
      0, 7, 8, 0, 9, 10, 0, 11, 12, 0, //matriz B com stride=1
      1, 2, 3, 99, 99, 4, 5, 6, 99, 99, 7, 8, 9, 99, 99, 10, 11, 12 
   };

   /*============ ONLY THE SIDE INTERFACE COMPUTES ==============*/
   int row_a = 2; 
   int col_a = 3; 
   int *addr_a = &memory[21];
   int stride_a = 2;
   int w;
   int new_col_a = size_new_col(col_a);
   

   printf("OLD FUNCTION THAT FILS SIDE BUFFER:\n");
   compute_sa_buffer(row_a,col_a,addr_a,stride_a);

   printf("WAVE SEARCH SIDE FUNCTION:\n");
   for(w=0;w<new_col_a;w++){
      wave_search_side(row_a,col_a,addr_a,stride_a,w);
      printf("\n");
   }
 
   /*============ ONLY THE TOP INTERFACE COMPUTES ==============*/
   int row_b = 3; 
   int col_b = 2; 
   int *addr_b = &memory[30];
   int stride_b = 1;
   int new_col_b = size_new_col(row_b);

   printf("WAVE SEARCH TOP FUNCTION:\n");
   for(w=0;w<new_col_b;w++){
      wave_search_top(row_b,col_b,addr_b,stride_b,w);
      printf("\n");
   }

   /*============ BOTH INTERFACES COMPUTE ==============*/
   printf("COMPUTE SA WAVES FUNCTION:\n");
   compute_sa_waves(row_a,col_a,addr_a,stride_a,row_b,col_b,addr_b,stride_b);

   return 0;
}