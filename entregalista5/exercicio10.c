#include <stdio.h>
#include <stdlib.h>

char vogal(char letra){
    char a,e,i,o,u;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'u' || letra == 'o'){
        printf("isso eh uma vogal");
        return 0;
    }
    else{
        printf("isso nao eh uma vogal");
        return 0;
    }
}
int main()
{
    char caractere;
    int resultado;
    printf("digite uma letra: ");
    scanf("%c",&caractere);
    resultado = vogal(caractere);
    return 0;
}
