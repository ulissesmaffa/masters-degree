#include<stdio.h>
#include "sa.h"

SA::SA(){
   for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
         ba_sa[i][j]=0;
      }
   }
}

void SA::addToBufferA(int i, int value){
   //adiciona valor e atualiza controle para ready
   if(i<N){
      //bufferA_li[i] = value;
      buffer_a_li[i].value = value;
      buffer_a_li[i].ready = true;
   }
}

void SA::addToBufferB(int j, int value){
   //adiciona valor e atualiza controle para ready
   if(j<N){
      //bufferB_tw[j] = value;
      buffer_b_tw[j].value = value;
      buffer_b_tw[j].ready = true;
   }
}

void SA::compute(){
   int i,j;

   // 1. Verifica se todos os buffers da interface estão prontos
   //Verifica li
   for(i=0;i<N;i++){ //possivel melhoria é verificar todos e apontar exatamente quais não estão prontos ainda
      if(buffer_a_li[i].ready==false){
         printf("Buffer_a_li[%i] não está pronto ainda.\n",i);
         return;
      }
   }
   //Verifica tw
   for(j=0;j<N;j++){
      if(buffer_b_tw[j].ready==false){
         printf("Buffer_b_tw[%i] não está pronto ainda.\n",j);
         return;
      }
   }
      
   // 2. Carrega entradas laterais BUFFER A
   // carrega valor e atualiza controle para noready
   for(i=0;i<N;i++){
      pe[i][0].li = buffer_a_li[i].value;
      buffer_a_li[i].ready=false;
   }

   // 3. Carrega entradas superiores BUFFER B
   for(j=0;j<N;j++){
      pe[0][j].tw = buffer_b_tw[j].value;
      buffer_b_tw[j].ready = false;
   }

   // 4. Conexões horizontais (pular primeira coluna)
   for(i=0;i<N;i++){
      for(j=1;j<N;j++){
         pe[i][j].li = pe[i][j-1].ri;
      }
   }

   // 5. Conexões verticais (pular primeira linha)
   for(i=1;i<N;i++){
      for(j=0;j<N;j++){
         pe[i][j].tw = pe[i-1][j].bw;
      }
   }

   // 4. Computa cada PE agora que todas as entradas foram estabelecidas
   for(i=0;i<N;i++){
      for(j=0;j<N;j++){
         pe[i][j].compute();
      }
   }

   // 5. Atualiza os acumuladores da `SA` com os resultados de cada PE
   for(i=0;i<N;i++){
      for(j=0;j<N;j++){
         ba_sa[i][j]=pe[i][j].ba;
      }
   }

}

void SA::reset(){
   //zerar registradores e colocar controle para noready
   int i,j;

   for(i=0;i<N;i++){
      buffer_a_li[i].ready=false;
      buffer_b_tw[i].ready=false;
      for(j=0;j<N;j++){
         pe[i][j].reset(); //apaga PE
         //ba_sa[i][j]=0; //apaga registradores SA
      }
   }
}

void SA::showResult(){
   printf("\nShowing result:\n"); 
   for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
         printf("BA_SA[%i][%i] = %d\n",i,j,ba_sa[i][j]);
         //printf("PE_BA[%i][%i] = %d\n",i,j,pe[i][j].ba);
      }
   }
}

void SA::top(int i, int value_a, int j, int value_b){
   compute();
   addToBufferA(i,value_a);
   addToBufferB(j,value_b);
   showResult();
   reset();
}