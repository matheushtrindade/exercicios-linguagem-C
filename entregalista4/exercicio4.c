#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i = 1,j = 1,soma;

    while(i<=99 && j<=50){
        soma += i/j;
        i = i+2;
        j++;
    }
    printf("a soma eh: %.2f",soma);
    return 0;
}
