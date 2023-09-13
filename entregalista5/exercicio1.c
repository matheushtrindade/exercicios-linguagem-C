#include <stdio.h>
#include <stdlib.h>

int expr(int j){
    float n1,n2;
    int i;
        for(i=0;j>i;i++){
                printf("digite as medidas do terreno: ");
                scanf("%f%f",&n1,&n2);
                printf("o tamanho do terreno eh: %.2f\n",n1*n2);
        }

}

int main()
{
    int j;
    float resultado;
    printf("digite a quantidade de terrenos a ser calculado: ");
    scanf("%d",&j);
    resultado = expr(j);
    return 0;
}

