/*
Implementação de Systolic Array do tipo Design B1.

O algoritmo implementa uma convolução entre o vetor de entrada x e o vetor de pesos w utilizando uma arquitetura sistólica do tipo Design B1.
Os pesos (w) permanecem fixos nas células ao longo de toda a execução.
As entradas (x_in) são transmitidas (broadcast) para as células conforme as iterações.
Os resultados parciais (y_out) são propagados entre as células, sendo acumulados conforme avançam na fila.
A cada iteração, as células realizam cálculos em paralelo, melhorando a eficiência computacional.

Descrição do algoritmo:
1) Inicialização
2) Cálculo do número de iterações
3) Loop principal: percorre todas as células duas vezes.
a) Loop 1: atualiza y_out em cada célula e imprime y_out na última
b) Loop 2: realiza os cálculos em cada célula

4) Cálculo do valor esperado (convolução direta para verificação):
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CELL 3
#define N_X 5
//#define LOOP 6

typedef struct _cell{
   int id;
   float w;
   float y_in;
   float y_out;
   float calc;
   float x_in;
   struct _cell *next;
   struct _cell *prev;
}cell;

void insertEnd(cell **start, cell **end, float w);
void resetCellValues(cell *p);
void showQueue(cell *start);
void showQueueComplete(cell *start);
void calcExpectedValue(float *w, int size_w, float *x, int size_x);
void printVector(float *v, int size);
void insertVector(float *v, int size, int type);
int calcLoop(int n, int k);

int main(){
   srand(time(NULL));

   cell *start = NULL;
   cell *end = NULL;
   int i;

   float w[N_CELL];
   insertVector(w,N_CELL,1);
   
   float x[N_X];
   insertVector(x,N_X,1);

   // Setup systolic architecture
   printf("Setup Systolic Array with %i cells\n",N_CELL);
   for(i=0;i<N_CELL;i++){
      printf("Insert cell %i with w=%.2f\n",i,w[i]);
      insertEnd(&start,&end,w[i]);
   }
   showQueue(start);
   showQueueComplete(start);
   printf("Vector X[%i]: ",N_X);
   printVector(x,N_X);
   printf("\n");

   int loop=calcLoop(N_X,N_CELL);
   int j;
   cell *aux;
   for(j=0;j<loop;j++){
      printf("Interaction:%i\n",j);
      //loop 1: it updates the y_out and the last cell prints the y_out
      printf("[%i] Loop 1: it updates the y_out = calc and the last cell prints the y_out\n",j);
      aux = start;
      for(i=0;i<N_CELL;i++){
         if(aux->next==NULL){ //verifica se é a última
            aux->y_out=aux->calc;
            printf("[%i] out = %.2f\n",j,aux->y_out);
            aux=aux->next;
         }else{
            aux->y_out=aux->calc;
            aux=aux->next;
         }
      }

      //loop 2: performs calculations => calc= w_x * x_in + y_in
      printf("[%i] Loop 2: performs calculations => calc= w_x * x_in + y_in\n",j);
      aux = start;
      for(i=0;i<N_CELL;i++){
         if(aux==start){ //primeira célula
            aux->y_in=0;
            if(j>=N_X){//vetor x acabou, logo, x_in = 0.0 a partir de agora
               printf("[%i] cell[%i]: calc = %.2f * %.2f + %.2f = %.2f\n",j,i,aux->w,0.0,aux->y_in,aux->w * 0.0 + aux->y_in);
               aux->calc = aux->w * 0.0 + aux->y_in;
            }else{
               printf("[%i] cell[%i]: calc = %.2f * %.2f + %.2f = %.2f\n",j,i,aux->w,x[j],aux->y_in,aux->w * x[j] + aux->y_in);
               aux->calc = aux->w * x[j] + aux->y_in;
            }
            aux=aux->next;
         }else{
            aux->y_in=(aux->prev)->y_out;
            if(j>=N_X){
               printf("[%i] cell[%i]: calc = %.2f * %.2f + %.2f = %.2f\n",j,i,aux->w,0.0,aux->y_in,aux->w * 0.0 + aux->y_in);
               aux->calc = aux->w * 0.0 + aux->y_in;
            }else{
               printf("[%i] cell[%i]: calc = %.2f * %.2f + %.2f = %.2f\n",j,i,aux->w,x[j],aux->y_in,aux->w * x[j] + aux->y_in);
               aux->calc = aux->w * x[j] + aux->y_in;
            }
            aux=aux->next;
         }
      }

      printf("\n");
   }

   calcExpectedValue(w,N_CELL,x,N_X);
   return 0;

}

void insertEnd(cell **start, cell **end, float w){
   cell *p = (cell *)malloc(sizeof(cell));
   if(p!=NULL){
      
      if(*start==NULL){ // Verifica o ponteiro de inicio está vazio, caso sim, essa será a primeira célula
         *start=p; // Atualiza ponteiro de inicio
         *end=p; // Atualiza ponteiro de fim
         p->id=0; // ID do primeiro será zero
         p->next=NULL;
         p->prev=NULL;
         resetCellValues(p); // Atualiza todos os valores para zero
         p->w=w;
      }else{
            (*end)->next=p; // Atualiza o último elemento da fila para apontar para o atual, que está sendo inserido
            p->prev=*end; //o anterior do atual, será o último
            p->id = (*end)->id + 1; // Atualiza o id do atual conforme o id do anterior
            p->next=NULL;
            *end = p; // Atualiza o ponteiro de último, agora o último é o atual
            resetCellValues(p); // Atualiza todos os valores para zero
            p->w=w;
         }

   }else{
      printf("Error insertEnd\n");
   }
}

void resetCellValues(cell *p) {
    if (p != NULL) {
        p->w = 0.0;
        p->y_in = 0.0;
        p->y_out = 0.0;
        p->calc = 0.0;
        p->x_in = 0.0;
    }
}

void showQueue(cell *start){
    bool running=true;
    cell *aux;
    aux=start;

    if(start==NULL){
        printf("The queue is empty!\n");
    }else{
        while(running){
            if(aux->next==NULL){ // the last element
                printf("%i\n",aux->id);
                running=false;
            }else{
                printf("%i -> ",aux->id);
                aux=aux->next;
            }
        }
    }
}

void showQueueComplete(cell *start){
    bool running=true;
    cell *aux;
    aux=start;

    if(start==NULL){
        printf("The queue is empty!\n");
    }else{
        while(running){
            if(aux->next==NULL){ // the last element
                printf("cell[%i]: w=%.2f\n",aux->id,aux->w);
                running=false;
            }else{
                printf("cell[%i]: w=%.2f\n",aux->id,aux->w);
                aux=aux->next;
            }
        }
    }
}


void calcExpectedValue(float *w, int size_w, float *x, int size_x) {
    int y_out = size_x - size_w + 1; 
    printf("It is expected %i values (n+1-z)\n", y_out);
    float expected_value;
    for (int i = 0; i < y_out; i++) {
        expected_value = 0.0;
        for (int j = 0; j < size_w; j++) {
            expected_value += w[j] * x[i + j];
        }
        printf("Expected Value: y%i=%.2f\n", i, expected_value);
    }
}

void printVector(float *v, int size){
    int i;

    for(i=0;i<size;i++){
        printf("%.2f ",v[i]);
    }
    printf("\n");
}

void insertVector(float *v, int size, int type){
   int i;

   switch (type){
      case 0: //random
         printf("Random insert:\n");
         for(i=0;i<size;i++){
            v[i]=(rand()%20)+1;
         }
         break;
      
      case 1: //random
         printf("Sequential insert:\n");
         for(i=0;i<size;i++){
            v[i]=i+1;
         }
         break;

      default: //random
         printf("Random insert:\n");
         break;
   }
}

int calcLoop(int n, int k){
   int n_y=n+1-k;
   int loop=k+n_y;
   printf("loop:%i\n",loop);
   return loop;
}