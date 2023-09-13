#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("digite sua terceira nota: ");
    scanf("%f", &nota3);

    media =(nota1+nota2+nota3)/3;

    if(nota1 > media && nota2 > media && nota3 > media){
            printf("esses notas estao acima da sua media:%.2f%.2f%.2f\n", nota1, nota2, nota3);
    }
    else if (nota1 > media && nota2 > media){
            printf("essas notas estao acima da sua media:%.2f%.2f\n", nota1, nota2);
    }
    else if (nota1 > media && nota3 > media){
            printf("essas notas estao acima da sua media:%2f.%.2f\n", nota1, nota3);
    }
    else if (nota2 > media && nota3 > media){
            printf("essas notas estao acima da sua media:%.2f%.2f\n", nota2, nota3);
    }
    else if (nota1 > media){
            printf("essa nota eh acima da sua media:%.2f\n", nota1);
    }
    else if (nota2 > media){
            printf("essa nota eh acima da sua media:%.2f\n", nota2);
    }
    else if(nota3 > media){
        printf("essa nota eh acima da sua media:%.2f\n", nota3);
    }
    else{
        printf("nenhum numero eh maior que a media");
    }

    return 0;
}
