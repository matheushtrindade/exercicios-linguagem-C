#include <stdio.h>
#include <stdlib.h>
void mult_matriz(int ordem,float matriz[ordem][ordem],int x){
    int i=0,j;

    for(j=ordem-1;0<=j;j--){
        matriz[i][j] *= x;
        i++;
    }
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int i,j,ordem,x;
    printf("digite a ordem da matriz quadratica: ");
    scanf("%d",&ordem);
    printf("digite a constante que ira fazer a multiplicacao: ");
    scanf("%d",&x);
    float matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("digite o valor [%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    mult_matriz(ordem,matriz,x);
return 0;
}
