#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    float saldo_medio;

    printf("digite seu saldo medio: ");
    scanf("%f", &saldo_medio);

    if(saldo_medio <= 200){
        printf("seu valor de credito eh:%.2f", saldo_medio*0.10);
    }
        else if(saldo_medio > 200 && saldo_medio <= 300){
            printf("seu valor de credito eh:%.2f", saldo_medio*0.20);
        }
        else if(saldo_medio > 300 && saldo_medio <= 400){
            printf("seu valor de credito eh:%.2f", saldo_medio*0.25);
        }
        else{
            printf("seu valor de credito eh:%.2f", saldo_medio*0.30);
        }

    return 0;
}
