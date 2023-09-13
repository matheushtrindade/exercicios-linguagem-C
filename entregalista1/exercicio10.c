#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia_total, combustivel_total, consumo_medio;
    printf("digite a distancia percorrida em km: ");
    scanf("%f", &distancia_total);
    printf("digite o total de combustivel gasto em litros: ");
    scanf("%f", &combustivel_total);

    consumo_medio = (distancia_total/combustivel_total);
    printf("o consumo medio corresponde a: %f", consumo_medio);
    return 0;
}
