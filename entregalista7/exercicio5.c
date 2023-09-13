#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

int main()
{
    int i,j,matriz[LIN][COL],soma = 0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&matriz[i][j]);
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }
    printf("a media dos elementos da diagonal principal eh: %.2f",(float)soma/5);
    return 0;
}
