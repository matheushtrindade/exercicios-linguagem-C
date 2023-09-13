#include <stdio.h>
#include <stdlib.h>

void calcula_matriz(int ordem,float matriz[ordem][ordem]){
    int i,j;
    float soma = 0;
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            if(i != j && i+j != ordem - 1){
                soma += matriz[i][j];
            }
        }
    }
    printf("\na soma dos termos que nao pertencem a diagonal principal e secundaria eh: %.2f",soma);
}

int main()
{
    int ordem,i,j;
    printf("digite a ordem de sua matriz quadratica: ");
    scanf("%d",&ordem);
    float matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("digite o termo [%d][%d] da matriz: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    calcula_matriz(ordem,matriz);
return 0;
}
