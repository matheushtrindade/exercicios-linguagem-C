#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5

int main()
{
    int i,j,menor_elemento = 100000,matriz[LIN][COL];
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]<menor_elemento){
                menor_elemento = matriz[i][j];
            }
        }
    }
    printf("o menor elemento dessa matriz eh: %d",menor_elemento);
    return 0;
}
