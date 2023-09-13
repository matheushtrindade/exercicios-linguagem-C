#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_normal, operacao1, operacao2, operacao3;
    printf("digite o valor da diaria: " );
    scanf("%f",&valor_normal);

    operacao1 = (valor_normal*0.70);
    operacao2 = (operacao1*31);
    operacao3 = (valor_normal*15);

    printf("o valor da diaria com desconto eh: %f\n", operacao1);
    printf("o total arrecadado com o dobro de ocupacao e diaria com desconto eh: %f\n", operacao2);
    printf("o total arrecadado hoje com a diaria normal eh: %f", operacao3);
    return 0;
}
