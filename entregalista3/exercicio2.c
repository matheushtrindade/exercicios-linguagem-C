#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3;

    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("digite o terceiro numero: ");
    scanf("%d", &numero3);

    if(numero1 <= numero2 && numero1 <= numero3){
        printf("esse eh o menor numero: %d\n", numero1);
        }

    else if (numero2 <= numero1 && numero2 <= numero3){
        printf("esse eh o menor numero: %d\n", numero2);
        }

    else {
        printf("esse eh o menor numero: %d\n", numero3);
        }


    return 0;


}
