#include <stdio.h>
#include <stdlib.h>
float imc(float peso,float altura){
    if(peso/pow(altura,2)<18.5){
        printf("Abaixo do peso");
    }
    else if(peso/pow(altura,2)>=18.5 && peso/pow(altura,2)<=24.9){
        printf("Peso normal");
    }
    else if(peso/pow(altura,2)>=25 && peso/pow(altura,2)<=29.9){
        printf("Sobrepeso");
    }
    else{
        printf("Obeso");
    }

}
int main()
{
    float peso,altura,resultado;
    printf("digite seu peso: ");
    scanf("%f",&peso);
    printf("digite sua altura: ");
    scanf("%f",&altura);
    resultado = imc(peso,altura);
    return 0;
}
