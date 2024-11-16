#include "sa.h"
#include <iostream>

SA::SA(){
   for(int i=0;i<ARRAY_SIZE;i++){
      for(int j=0;j<ARRAY_SIZE;j++){
         ba_sa[i][j]=0;
      }
   }
}


void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}


void SA::showBuffers() {
   int i,j;

   printf("bufferA_li:\n");
   for(i=0;i<ARRAY_SIZE;i++){
      queue<uint8_t> tempA = bufferA_li[i];
      printf("[%li]bufferA_li[%i]: ",tempA.size(),i);
      while (!tempA.empty()){
         printf("%i ",tempA.front());
         tempA.pop();
      }
      printf("\n");
   }

   printf("bufferB_tw:\n");
   for(j=0;j<ARRAY_SIZE;j++){
      queue<uint8_t> tempB = bufferB_tw[j];
      printf("[%li]bufferB_tw[%i]: ",tempB.size(),j);
      while (!tempB.empty()){
         printf("%i ",tempB.front());
         tempB.pop();
      }
      printf("\n");
   }
}

void SA::showBufferB() {
   int i,j;
   
   printf("bufferB_tw:\n");
   for(j=0;j<ARRAY_SIZE;j++){
      queue<uint8_t> temp = bufferB_tw[j];
      printf("[%li]bufferB_tw[%i]: ",temp.size(),j);
      while (!temp.empty()){
         printf("%i ",temp.front());
         temp.pop();
      }
      printf("\n");
   }
}

void SA::addToBufferA(int row, uint8_t value){
   if(row<ARRAY_SIZE){
      bufferA_li[row].push(value);
   }
}

void SA::addToBufferB(int col, uint8_t value){
   if(col<ARRAY_SIZE){
      bufferB_tw[col].push(value);
   }
}

void SA::compute(){
   int i,j;

   // 1. Verifica se há dados suficientes em ambos os buffers
   if(bufferA_li[0].empty() || bufferB_tw[0].empty() ){
      printf("Buffers incompletos. Aguarde dados suficientes para o processamento.\n");
      return;
   }
      
   // 2. Carrega entradas laterais BUFFER A
   for(i=0;i<ARRAY_SIZE;i++){
      //printf("pe[%i][0].li = %i \n",i,bufferA_li[i].front());
      pe[i][0].li = bufferA_li[i].front();
      bufferA_li[i].pop();
   }

   // 3. Carrega entradas superiores BUFFER B
   for(j=0;j<ARRAY_SIZE;j++){
      //printf("pe[0][%i].tw = %i \n",j,bufferA_li[i].front());
      pe[0][j].tw = bufferB_tw[j].front();
      bufferB_tw[j].pop();
   }

   // 4. Conexões horizontais (pular primeira coluna)
   for(i=0;i<ARRAY_SIZE;i++){
      for(j=1;j<ARRAY_SIZE;j++){
         pe[i][j].li = pe[i][j-1].ri;
      }
   }

   // 5. Conexões verticais (pular primeira linha)
   for(i=1;i<ARRAY_SIZE;i++){
      for(j=0;j<ARRAY_SIZE;j++){
         pe[i][j].tw = pe[i-1][j].bw;
      }
   }

   // 4. Computa cada PE agora que todas as entradas foram estabelecidas
   for(i=0;i<ARRAY_SIZE;i++){
      for(j=0;j<ARRAY_SIZE;j++){
         pe[i][j].compute();
      }
   }

   // 5. Atualiza os acumuladores da `SA` com os resultados de cada PE
   for(i=0;i<ARRAY_SIZE;i++){
      for(j=0;j<ARRAY_SIZE;j++){
         ba_sa[i][j]=pe[i][j].ba;
      }
   }
}

void SA::reset(){
   int i,j;

   for(i=0;i<ARRAY_SIZE;i++){
      //esvazia buffer A
      while(!bufferA_li[i].empty()){
         bufferA_li[i].pop();
      }
      //esvazia buffer B
      while(!bufferB_tw[i].empty()){
         bufferB_tw[i].pop();
      }

      for(j=0;j<ARRAY_SIZE;j++){
         pe[i][j].reset(); //apaga PE
         ba_sa[i][j]=0; //apaga registradores SA
      }
   }
}