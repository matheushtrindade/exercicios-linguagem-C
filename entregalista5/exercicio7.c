#include <stdio.h>
#include <stdlib.h>

int tabuada(int num){
    int i=0,j=10,valores;
    for(i;i<=j;i++){
        valores = num*i;
        printf("%d x %d = %d\n",num,i,valores);
    }
}
int main()
{
    int numero,resultado;
    printf("digite o valor que deseja saber a tabuada: ");
    scanf("%d",&numero);
    resultado = tabuada(numero);
    return 0;
}
