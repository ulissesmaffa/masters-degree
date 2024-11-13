#include "sa.h"
#include <iostream>

SA::SA():  
   tw_sa_00(0), tw_sa_01(0),
   li_sa_00(0), li_sa_10(0), 
   ba_sa_00(0), ba_sa_01(0), ba_sa_10(0), ba_sa_11(0)
{}

void SA::showBuffers() {
   printf("[%li]bufferA_li_00: ",bufferA_li_00.size());
   while (!bufferA_li_00.empty()) {
      printf("%i ",bufferA_li_00.front());
      bufferA_li_00.pop();
   }
   printf("\n");

   printf("[%li]bufferA_li_10: ",bufferA_li_10.size());
   while (!bufferA_li_10.empty()) {
      printf("%i ",bufferA_li_10.front());
      bufferA_li_10.pop();
   }
   printf("\n");

   printf("[%li]bufferB_tw_00: ",bufferB_tw_00.size());
   while (!bufferB_tw_00.empty()) {
      printf("%i ",bufferB_tw_00.front());
      bufferB_tw_00.pop();
   }
   printf("\n");

   printf("[%li]bufferB_tw_01: ",bufferB_tw_01.size());
   while (!bufferB_tw_01.empty()) {
      printf("%i ",bufferB_tw_01.front());
      bufferB_tw_01.pop();
   }
   printf("\n");
}


// Funções para adicionar dados ao Buffer A
void SA::addToBufferA_li00(uint8_t li_00) {
   bufferA_li_00.push(li_00);
}
void SA::addToBufferA_li10(uint8_t li_10) {
   bufferA_li_10.push(li_10);
}

// Funções para adicionar dados ao Buffer B
void SA::addToBufferB_tw00(uint8_t tw_00) {
   bufferB_tw_00.push(tw_00);
}
void SA::addToBufferB_tw01(uint8_t tw_01) {
   bufferB_tw_01.push(tw_01);
}

void SA::compute(){
   
   // Verifica se há dados suficientes em ambos os buffers
   if (bufferA_li_00.empty() || bufferA_li_10.empty() || bufferB_tw_00.empty() || bufferB_tw_01.empty()) {
       std::cout << "Buffers incompletos. Aguarde dados suficientes para o processamento." << std::endl;
       return;
   }


   // 1. Carrega as entradas dos PEs a partir dos buffers
   pe[0][0].li = bufferA_li_00.front();
   pe[1][0].li = bufferA_li_10.front();
   pe[0][0].tw = bufferB_tw_00.front();
   pe[0][1].tw = bufferB_tw_01.front();

   // 2. Remove os elementos consumidos dos buffers
   bufferA_li_00.pop();
   bufferA_li_10.pop();
   bufferB_tw_00.pop();
   bufferB_tw_01.pop();

   // 3. Passa os dados entre os PEs (sem calcular ainda)
   pe[0][1].li = pe[0][0].ri; // Passa a saída direita de PE[0][0] para a entrada esquerda de PE[0][1]
   pe[1][0].tw = pe[0][0].bw; // Passa a saída inferior de PE[0][0] para a entrada superior de PE[1][0]
   pe[1][1].tw = pe[0][1].bw; // Passa a saída inferior de PE[0][1] para a entrada superior de PE[1][1]
   pe[1][1].li = pe[1][0].ri; // Passa a saída direita de PE[1][0] para a entrada esquerda de PE[1][1]
   

/*
   // 1. e 2. Configura as entradas iniciais para os PEs
   pe[0][0].tw = tw_sa_00;
   pe[0][1].tw = tw_sa_01;
   pe[0][0].li = li_sa_00;
   pe[1][0].li = li_sa_10;

   // 3. Passa os dados entre os PEs (sem calcular ainda)
   pe[0][1].li = pe[0][0].ri; // Passa a saída direita de PE[0][0] para a entrada esquerda de PE[0][1]
   pe[1][0].tw = pe[0][0].bw; // Passa a saída inferior de PE[0][0] para a entrada superior de PE[1][0]
   pe[1][1].tw = pe[0][1].bw; // Passa a saída inferior de PE[0][1] para a entrada superior de PE[1][1]
   pe[1][1].li = pe[1][0].ri; // Passa a saída direita de PE[1][0] para a entrada esquerda de PE[1][1] 
*/

   // 4. Computa cada PE agora que todas as entradas foram estabelecidas
   pe[0][0].compute();
   pe[0][1].compute();
   pe[1][0].compute();
   pe[1][1].compute();

   // 5. Atualiza os acumuladores da `SA` com os resultados de cada PE
   ba_sa_00 = pe[0][0].ba;
   ba_sa_01 = pe[0][1].ba;
   ba_sa_10 = pe[1][0].ba;
   ba_sa_11 = pe[1][1].ba;
}

void SA::reset(){
   pe[0][0].reset();
   pe[0][1].reset();
   pe[1][0].reset();
   pe[1][1].reset();

   ba_sa_00 = 0;
   ba_sa_01 = 0;
   ba_sa_10 = 0;
   ba_sa_11 = 0; 

   // Esvazia os buffers
   while (!bufferA_li_00.empty()) bufferA_li_00.pop();
   while (!bufferA_li_10.empty()) bufferA_li_10.pop();
   while (!bufferB_tw_00.empty()) bufferB_tw_00.pop();
   while (!bufferB_tw_01.empty()) bufferB_tw_01.pop();
}