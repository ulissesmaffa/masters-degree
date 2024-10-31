#include <stdio.h>
#include <iostream>
#include "sa.h"

int main() {
    PE pe[2][2];
    int length=4;
    int array_tw_00[length]={1,2,0,0};
    int array_tw_01[length]={0,3,4,0};
    int array_li_00[length]={5,7,0,0};
    int array_li_10[length]={0,6,8,0};

    for(int i=0;i<length;i++){
        printf("Inserindo dados no topo PE00 e PE01\n");
        //printf("tw00.[%i] %i\n",i,array_tw_00[i]);
        //printf("tw01.[%i] %i\n",i,array_tw_01[i]);
        pe[0][0].tw = array_tw_00[i];
        pe[0][1].tw = array_tw_01[i];

        printf("Inserindo dados na lateral PE00 e PE10\n");
        //printf("li00.[%i] %i\n",i,array_li_00[i]);
        //printf("li10.[%i] %i\n",i,array_li_10[i]);
        pe[0][0].li = array_li_00[i];
        pe[1][0].li = array_li_10[i];

        printf("Passando os dados entre PEs\n");
        pe[0][1].li = pe[0][0].ri;
        pe[1][0].tw = pe[0][0].bw;
        pe[1][1].tw = pe[0][1].bw;
        pe[1][1].li = pe[1][0].ri;

        printf("Computando [%i]...\n",i);

        printf("PE[00].ba = %d + %d * %d\n",static_cast<int>(pe[0][0].ba),static_cast<int>(pe[0][0].li),static_cast<int>(pe[0][0].tw));
        pe[0][0].compute();
        printf("PE[00].ba = %d\n",static_cast<int>(pe[0][0].ba));

        printf("PE[01].ba = %d + %d * %d\n",static_cast<int>(pe[0][1].ba),static_cast<int>(pe[0][1].li),static_cast<int>(pe[0][1].tw));
        pe[0][1].compute();
        printf("PE[01].ba = %d\n",static_cast<int>(pe[0][1].ba));

        printf("PE[10].ba = %d + %d * %d\n",static_cast<int>(pe[1][0].ba),static_cast<int>(pe[1][0].li),static_cast<int>(pe[1][0].tw));
        pe[1][0].compute();
        printf("PE[10].ba = %d\n",static_cast<int>(pe[1][0].ba));

        printf("PE[11].ba = %d + %d * %d\n",static_cast<int>(pe[1][1].ba),static_cast<int>(pe[1][1].li),static_cast<int>(pe[1][1].tw));
        pe[1][1].compute();
        printf("PE[11].ba = %d\n",static_cast<int>(pe[1][1].ba));
        printf("\n");
    }
    
    printf("PE[00] = %d\n",static_cast<int>(pe[0][0].ba));
    printf("PE[01] = %d\n",static_cast<int>(pe[0][1].ba));
    printf("PE[10] = %d\n",static_cast<int>(pe[1][0].ba));
    printf("PE[11] = %d\n",static_cast<int>(pe[1][1].ba));
            /*
        pe[i].li = B[i][0];
        pe[i].tw = A[i][0];
        pe[i].compute();
        printf("PE[%i]: li=%d\n",i,static_cast<int>(pe[i].ri));
        printf("PE[%i]: tw=%d\n",i,static_cast<int>(pe[i].tw));
        printf("PE[%i]: ba=%d\n",i,static_cast<int>(pe[i].ba));
        printf("\n");*/
    //}

    return 0;
}
