#include <stdio.h>
#include <stdlib.h>
#include "sbuffer.h"

cell *start = NULL;
cell *end = NULL;

void insertEnd(cell **start, cell **end, int a){
   cell *p = (cell *)malloc(sizeof(cell));
   if(p!=NULL){
      
      if(*start==NULL){ // Verifica o ponteiro de inicio está vazio, caso sim, essa será a primeira célula
         *start=p; // Atualiza ponteiro de inicio
         *end=p; // Atualiza ponteiro de fim
         p->id=0; // ID do primeiro será zero
         p->next=NULL;
         p->prev=NULL;
         p->value=a;
      }else{
            (*end)->next=p; // Atualiza o último elemento da fila para apontar para o atual, que está sendo inserido
            p->prev=*end; //o anterior do atual, será o último
            p->id = (*end)->id + 1; // Atualiza o id do atual conforme o id do anterior
            p->next=NULL;
            *end = p; // Atualiza o ponteiro de último, agora o último é o atual
            p->value=a;
         }

   }else{
      printf("Error insertEnd\n");
   }
}

void sbuffer(data_t a, data_t i){
   insertEnd(&start,&end,a);
}

void getBuffer(){
   
}

void top(data_t a, data_t i){
   sbuffer(a,i);
   getBuffer();
}