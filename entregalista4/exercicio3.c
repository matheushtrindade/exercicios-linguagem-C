#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultado,i;
    int num;

    printf("digite um numero: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        resultado += 1/i;
    }
    printf("%.2f",resultado);
    return 0;
}
