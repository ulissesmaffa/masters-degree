#include <stdio.h>
#include "sbuffer.h"

int main(){
   const int SAMPLES=11;
   data_t a[SAMPLES] = {1, 2, 3, 1, 6, -4, -1, 2, 4, 1, 2};

   FILE *fp;
   fp = fopen("out.dat", "w");
   
   for (int i=0;i<SAMPLES;i++) {
      sbuffer(a[i],i);
      //fprintf(fp, "%d %d\n", i, getBuffer());
      fprintf(fp, "%d %d\n", i, a[i]);
   }

   fclose(fp);

   printf("Comparando contra o arquivo de saída esperado (out.gold.dat)\n");
   if (system("diff -w out.dat out.gold.dat")) {
      printf("*******************************************\n");
      printf("FAIL: A saída não corresponde ao esperado\n");
      printf("*******************************************\n");
      return 1;
   } else {
      printf("*******************************************\n");
      printf("PASS: A saída corresponde ao esperado!\n");
      printf("*******************************************\n");
      return 0;
   }
}
