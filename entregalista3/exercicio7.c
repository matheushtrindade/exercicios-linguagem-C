#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_atual;
    int codigo;

    printf("informe seu salario atual: ");
    scanf("%f", &salario_atual);
    printf("-----------------------------------------\n");
    printf("para vendedor digite: 1\npara auxiliar de escrtiorio digite: 2\npara auxiliar de enfermagem digite: 3\npara bibliotecario digite: 4\n");
    printf("-----------------------------------------\n");
    printf("digite o numero do seu cargo: ");
    scanf("%d", &codigo);

    switch (codigo){

        case 1:
            printf("o reajuste no seu salario foi de: %.2f\n", salario_atual*0.10);
            printf("o seu salrio atualizado eh: %.2f\n", salario_atual*1.10);
            break;

        case 2:
            printf("o reajuste no seu salario foi de: %.2f\n", salario_atual*0.07);
            printf("o seu salrio atualizado eh: %.2f\n", salario_atual*1.07);
            break;

        case 3:
            printf("o reajuste no seu salario foi de: %.2f\n", salario_atual*0.12);
            printf("o seu salrio atualizado eh: %.2f\n", salario_atual*1.12);
            break;

        case 4:
            printf("o reajuste no seu salario foi de: %.2f\n", salario_atual*0.11);
            printf("o seu salrio atualizado eh: %.2f\n", salario_atual*1.11);
            break;

        default:
            printf("ERRO");
            break;

    }

    return 0;

}











