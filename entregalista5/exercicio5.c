#include <stdio.h>
#include <stdlib.h>

float medias(char tipo){
    float n1,n2;
    switch(tipo){
    case'a':
        printf("digite suas medias: ");
        scanf("%f%f",&n1,&n2);
        printf("sua media aritmetica eh: %.2f",(n1+n2)/2);
        break;
    case'p':
        printf("digite suas medias: ");
        scanf("%f%f",&n1,&n2);
        printf("sua media ponderada eh: %.2f",(n1*3+n2*2)/5);
        break;
    case'h':
        printf("digite suas medias: ");
        scanf("%f%f",&n1,&n2);
        printf("sua media harmonica eh: %.2f",2/((1/n1)+(1/n2)));
        break;
}


}
int main()
{
    char tipo_main;
    float num1,num2,resultado;
    printf("qual o tipo de media a ser calculada: ");
    scanf("%c",&tipo_main);
    resultado = medias(tipo_main);
    return 0;
}
