#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, LIN, COL;
    printf("digite o numero de linhas da matriz: ");
    scanf("%d",&LIN);
    printf("digite o numero de colunas da matriz: ");
    scanf("%d",&COL);
    float matriz[LIN][COL];
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("digite o numero [%d][%d] da matriz: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("resultado matriz\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("%.1f ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("matriz transposta\n");
    for(j=0;j<COL;j++){
        for(i=0;i<LIN;i++){
            printf("%.1f ",matriz[i][j]);
        }
        printf("\n");
    }
return 0;
}
