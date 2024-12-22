/*
Implementação de Systolic Array para multiplicação de uma matriz por um vetor.

O problema de multiplicar uma matriz por um vetor se dá pela multiplicação de uma linha da matriz pela coluna do vetor,
para que isso ocorra certo, o numero de elementos na linha de uma matriz tem que ser igual ao número de elementos do vetor.

Para garantir que cada variável seja atraibuída apenas uma vez durante a execução (Single Assignment Code) pode ser feito utilizando
variáveis temporárias ou incrementando o index da variável destino.

for(i=0;i<3;i++){
    c(i,1)=0
    for (j=0;j<3;j++){
        c(i,j+1)=c(i,j)+A(i,j)*b(j)
    }
}

Inicialização: c[0][0] = 0; (primeira coluna da linha 0)
Cálculo para i=0:
    Para j=0: c[0][1] = c[0][0] + A[0][0] * b[0]; → Aloca o primeiro cálculo intermediário.
    Para j=1: c[0][2] = c[0][1] + A[0][1] * b[1]; → Aloca o segundo cálculo intermediário.
    Para j=2: c[0][3] = c[0][2] + A[0][2] * b[2]; → Aloca o resultado final de c0c0​.

*/

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 3


int main(){
    int i,j;
    int A[ROW][COL]={1,2,3,4,5,6};
    int b[COL]={7,8,9};
    int b_2[ROW+1][COL]={ 7,8,9,
                        0,0,0,
                        0,0,0
                    };
    int c[ROW];
    int c_r[ROW][COL+1];

    //Print the matrix
    printf("The matrix A is:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%i ",A[i][j]);
        }
        printf("\n");
    }
    
    //Print the vector B
    printf("The vector b is:\n");
    for(i=0;i<COL;i++){
        printf("%i ",b[i]);
    }
    printf("\n");

    //Print the vector B_2
    printf("The vector b_2 is:\n");
    for(i=0;i<COL;i++){
        printf("%i ",b[i]);
    }
    printf("\n");
    
    /*======================================================================
    Simple method c=A*b
    ======================================================================*/
    //zerar c
    for(i=0;i<ROW;i++){
        c[i]=0;
    }
    //calc linha x col
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            c[i]=c[i]+A[i][j]*b[j];
            //printf("%i ",c[i]);
        }
    }
    //print vector c
    printf("\nMultiplying A*b with normal method result in the vector c:\n");
    for(i=0;i<ROW;i++){
        printf("%i ",c[i]);
    }
    printf("\n");

    /*======================================================================
    Single Assignment Code with GLOBAL B
    ======================================================================*/
    // Initializing c(i,1) to 0
    for(i=0;i<ROW;i++) {
        c_r[i][0]=0; //c(i,1) = 0 in 1-index notation
    }

    // Calculating c(i,j+1) = c(i,j) + A(i,j) * b(j)
    for(i=0;i<ROW;i++) {
        for(j=0;j<COL;j++) {
            c_r[i][j+1]=c_r[i][j]+A[i][j]*b[j];// Calcula cada novo c_r(i, j+1)
        }
    }

    // Print the final result c as a single value per row
    printf("Multiplying A*b with recursive algorithm I result in the vector c_r (Global B):\n");
    for (i=0;i<ROW;i++) {
        printf("%i ",c_r[i][COL]); // Print the last value of each row which is the accumulated result
    }
    printf("\n");

    /*======================================================================
    Single Assignment Code with TRANSMITTING B
    ======================================================================*/
    // Initializing c(i,1) to 0
    for(i=0;i<ROW;i++) {
        c_r[i][0]=0; //c(i,1) = 0 in 1-index notation
    }

    // Calculating c(i,j+1) = c(i,j) + A(i,j) * b(j) 
    for(i=0;i<ROW;i++) {
        for(j=0;j<COL;j++) {
            b_2[i+1][j]=b_2[i][j];
            c_r[i][j+1]=c_r[i][j]+A[i][j]*b_2[i][j];
        }
    }

    // Print the final result c as a single value per row
    printf("Multiplying A*b with recursive algorithm II result in the vector c_r (Transmitting B):\n");
    for (i=0;i<ROW;i++) {
        printf("%i ",c_r[i][COL]); // Print the last value of each row which is the accumulated result
    }
    printf("\n");

    return 0;
}

