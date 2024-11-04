#include <stdio.h>
#include <iostream>
#include "sa.h"

int main() {
    SA sa;

    int length=4;
    int array_tw_00[length]={7,5,0,0};
    int array_tw_01[length]={0,8,6,0};
    int array_li_00[length]={2,1,0,0};
    int array_li_10[length]={0,4,3,0};

    for(int i=0;i<length;i++){
        printf("Inserindo dados na topo do SA\n");
        sa.tw_sa_00 = array_tw_00[i];
        sa.tw_sa_01 = array_tw_01[i];

        printf("Inserindo dados na lateral do SA\n");
        sa.li_sa_00 = array_li_00[i];
        sa.li_sa_10 = array_li_10[i];

        printf("Computando [%i]...\n",i);
        sa.compute();
    }
    
    printf("BA_SA[00] = %d\n",static_cast<int>(sa.ba_sa_00));
    printf("BA_SA[01] = %d\n",static_cast<int>(sa.ba_sa_01));
    printf("BA_SA[10] = %d\n",static_cast<int>(sa.ba_sa_10));  
    printf("BA_SA[11] = %d\n",static_cast<int>(sa.ba_sa_11));

    sa.reset();

    length=4;
    int array_tw_00_2[length]={132,89,0,0};
    int array_tw_01_2[length]={0,1,12,0};
    int array_li_00_2[length]={45,3,0,0};
    int array_li_10_2[length]={0,4,32,0};

    for(int i=0;i<length;i++){
        printf("Inserindo dados na topo do SA\n");
        sa.tw_sa_00 = array_tw_00_2[i];
        sa.tw_sa_01 = array_tw_01_2[i];

        printf("Inserindo dados na lateral do SA\n");
        sa.li_sa_00 = array_li_00_2[i];
        sa.li_sa_10 = array_li_10_2[i];

        printf("Computando [%i]...\n",i);
        sa.compute();
    }
    
    printf("BA_SA[00] = %d\n",static_cast<int>(sa.ba_sa_00));
    printf("BA_SA[01] = %d\n",static_cast<int>(sa.ba_sa_01));
    printf("BA_SA[10] = %d\n",static_cast<int>(sa.ba_sa_10));  
    printf("BA_SA[11] = %d\n",static_cast<int>(sa.ba_sa_11));

    return 0;
}
