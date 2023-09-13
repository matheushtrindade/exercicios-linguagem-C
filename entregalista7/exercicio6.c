#include <stdio.h>
#include <stdlib.h>
void calcula_matriz(int ordem,float matriz[ordem][ordem]){
    int i,j;
    float soma = 0;

    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            if(j>i){
                soma += matriz[i][j];
            }
        }
    }
    printf("a soma dos numeros acima da diagonal eh: %.2f",soma);
}
int main()
{
    int ordem,i,j;
    printf("qual a ordem da matriz quadratica: ");
    scanf("%d",&ordem);
    float matriz[ordem][ordem];
    for(i=0;i<ordem;i++){
        for(j=0;j<ordem;j++){
            printf("digite o numero da matriz [%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    calcula_matriz(ordem,matriz);
    return 0;

}
