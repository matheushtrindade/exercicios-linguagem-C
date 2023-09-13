#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero_funcionario, numero_horas, valor_hora, salario;

    printf("digite seu numero:");
    scanf("%f", &numero_funcionario);
    printf("digite seu numero de horas trabalhadas:");
    scanf("%f", &numero_horas);
    printf("digite o valor que recebe por horas:");
    scanf("%f", &valor_hora);

    salario = numero_horas*valor_hora;

    printf("o seu numero eh:%.2f\n", numero_funcionario);
    printf("o seu salario eh:%.2f", salario);


}
