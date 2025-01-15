#include <stdio.h>
#include "loop_de_for.h"

int main(){
   LDF ldf;

   int a[2][2]={{1,2},{3,4}};
   int b[2][2]={{5,6},{7,8}};
   int i,j;

   loop_init(&ldf); 

   int value = 0;
   for(i=0;i<N;i++){
      for(j=0;j<N;j++){
         //loop_compute(&ldf,a[i][j],b[j][i],i,j);
         printf("[%i][%i] %d = %d + %d * %d\n",i,j,(value+(a[i][j]*b[j][i])),value,a[i][j],b[j][i]);
         value = value + a[i][j]*b[j][i];
      }
   }

   //loop_show_ba(&ldf);
}