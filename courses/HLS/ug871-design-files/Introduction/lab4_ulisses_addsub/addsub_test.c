#include <stdio.h>
#include "addsub.h"

int main(){
   const int SAMPLES=11;
   data_t a[SAMPLES] = {1, 2, 3, 1, 6, -4, -1, 2, 4, 1, 2};
   data_t b[SAMPLES] = {2, 2, 3, 3, 1, 5, -3, -4, 4, 2, 2};
   data_t c[SAMPLES]; 

   FILE *fp;
   fp = fopen("out.dat", "w");
   
   for (int i = 0; i < SAMPLES; i++) {
      addsub(a[i], b[i], &c[i]);
      fprintf(fp, "%d %d %d %d\n", i, a[i], b[i], c[i]);
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
