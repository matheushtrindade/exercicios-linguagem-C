#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario_base, calculo_salario;
   printf("digite seu salario base: ");
   scanf("%f", &salario_base);

   calculo_salario = (salario_base*0.88)+50;

   printf("seu salario a receber eh: %f", calculo_salario);

   return 0;
}
