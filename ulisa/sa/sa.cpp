#include "sa.h"
#include <iostream>

SA::SA():  
   tw_sa_00(0), tw_sa_01(0),
   li_sa_00(0), li_sa_10(0), 
   ba_sa_00(0), ba_sa_01(0), ba_sa_10(0), ba_sa_11(0)
{}

void SA::compute(){
   // 1. Configura as entradas iniciais para os PEs
   pe[0][0].tw = tw_sa_00;
   pe[0][1].tw = tw_sa_01;
   pe[0][0].li = li_sa_00;
   pe[1][0].li = li_sa_10;

   // 2. Passa os dados entre os PEs (sem calcular ainda)
   pe[0][1].li = pe[0][0].ri; // Passa a saída direita de PE[0][0] para a entrada esquerda de PE[0][1]
   pe[1][0].tw = pe[0][0].bw; // Passa a saída inferior de PE[0][0] para a entrada superior de PE[1][0]
   pe[1][1].tw = pe[0][1].bw; // Passa a saída inferior de PE[0][1] para a entrada superior de PE[1][1]
   pe[1][1].li = pe[1][0].ri; // Passa a saída direita de PE[1][0] para a entrada esquerda de PE[1][1]
   
   // 3. Computa cada PE agora que todas as entradas foram estabelecidas
   pe[0][0].compute();
   pe[0][1].compute();
   pe[1][0].compute();
   pe[1][1].compute();

   // 4. Atualiza os acumuladores da `SA` com os resultados de cada PE
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
}