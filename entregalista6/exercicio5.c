#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100];
    int numero,count = 0, i = 0;

    while(1){
        printf("digite um numero (ou -1 para encerrar): ");
        scanf("%d",&numero);

        if(numero == -1){
            break;
        }

        vetor[i] = numero;
        i++;
    }
    for(int j = 0;j<i;j++){
        if(vetor[j]>=10 && vetor[j]<=50){
            count++;
        }
    }
    printf("quantidade de numeros dentro do intervalo [10:50] eh: %d",count);
    return 0;
}
