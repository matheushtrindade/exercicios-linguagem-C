#include <stdio.h>
#include <stdlib.h>

int main()
{
   float massa_corporal, altura_pessoa, IMC;

   printf("digite sua massa corporal:");
   scanf("%f", &massa_corporal);
   printf("digite sua altura:");
   scanf("%f", &altura_pessoa);

   IMC = massa_corporal/pow(altura_pessoa,2);

   printf("seu IMC eh:%.2f", IMC);
   return 0;
}
