#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,idade_menor=0,idade_maior=0,continuar= 1;

    while(continuar != 0){
        printf("digite uma idade: ");
        scanf("%d",&num);
            if(num<18)
                idade_menor++;
            else if (num>30)
                idade_maior++;
        printf("deseja continuar 1 para sim 0 para nao: ");
        scanf("%d",&continuar);
    }
    printf("pessoas menores que 18 anos:%d \npessoas maiores que 30 anos:%d", idade_menor,idade_maior);
    return 0;



}
