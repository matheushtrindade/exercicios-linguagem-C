#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 3
int main()
{
    int i,j,matriz[LIN][COL],vetor[15],x=0,k=0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("digite o valor da posicao [%d] [%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j] % 3 == 0){
               vetor[x] = matriz[i][j];
               k++;
               x++;
            }
        }
    }
    for(x=0;x<k;x++){
            printf("[%d] = %d\n",x,vetor[x]);
    }
    return 0;
}
