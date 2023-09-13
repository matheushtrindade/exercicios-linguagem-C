#include <stdio.h>
#include <stdlib.h>

int divisores(int j){
    int i=0,qtd_divisores=0;
        for(i=1;j>i;i++){
            if(j%i==0){
                printf("%d\n",i);
                qtd_divisores++;
            }
        }
    printf("quantidade de numeros divisores: %d",qtd_divisores);
    return 0;
}
int main()
{
    int num,resultado;
    printf("digite um numero: ");
    scanf("%d",&num);
    resultado = divisores(num);
    return 0;
}
