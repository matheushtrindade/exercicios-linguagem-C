#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vogal;

    printf("digite qualquer letra do alfabeto: ");
    scanf("%c", &vogal);

    if(vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u' || vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U'){
        printf("isso eh uma vogal");
    }
    else{
        printf("isso nao eh uma vogal");
    }

    return 0;
}
