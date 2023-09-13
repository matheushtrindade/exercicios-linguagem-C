#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2, numero3;

    printf("digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("digite o terceiro numero: ");
    scanf("%f", &numero3);

    if(numero1 == numero2 && numero2 == numero3){
        printf("esse triangulo eh equilatero");
    }
    else if(numero1 == numero2 || numero2 == numero3 || numero1 == numero3){
        printf("esse triangulo eh isoceles");
    }
    else{
        printf("esse triangulo eh escaleno");
    }

    return 0;
}
