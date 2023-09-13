#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float eq2 (float a,float b,float c){
    float delta = pow(b,2) - (4*a*c);
        if(a==0){
            printf("Nao eh uma equacao de segundo grau\n");
        }
        else if(delta<0){
            printf("Nao existem raizes reais\n");
        }
        else{
            printf("o valor de delta eh: %.2f\n",delta);
            printf("o valor de x1 eh: %.2f\n", (-b + sqrt(delta))/ (2*a));
            printf("o valor de x2 eh: %.2f\n", (-b - sqrt(delta))/ (2*a));
        }

}
int main()
{
    float a,b,c,resultado;
    printf("digite o valor de a,b,c para o calculo da eaquacao: ");
    scanf("%f%f%f",&a,&b,&c);
    resultado = eq2(a,b,c);
    return 0;
}
