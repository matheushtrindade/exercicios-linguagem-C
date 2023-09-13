#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_gasto, valor_total;

    printf("digite o valor gasto:");
    scanf("%f", &valor_gasto);

    valor_total = valor_gasto*1.10;

    printf("o valor total a ser pago eh:%.2f", valor_total);
}
