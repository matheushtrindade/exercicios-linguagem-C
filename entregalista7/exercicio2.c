#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 5
int main()
{
    int i,j,matriz[LIN][COL],vetor[5],soma=0;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("digite o valor da matriz [%d] [%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(j=0;j<COL;j++){
        for(i=0;i<LIN;i++){
            soma = soma + matriz[i][j];
        }
        vetor[j] = soma;
        soma = 0;
    }
    for(j=0;j<COL;j++){
        printf("[%d] = %d \n",j,vetor[j]);
    }
    return 0;
}
