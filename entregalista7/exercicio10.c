#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 7

int main()
{
    int i,j,matriz[LIN][COL],count = 0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("digite o valor de [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10 && matriz[i][j]<50){
                matriz[i][j] = 0;
                count++;
            }
        }
    }
    printf("%d valores estao no itervalo [10,50]\n",count);
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
return 0;
}

