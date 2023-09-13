#include <stdio.h>
#include <stdlib.h>
#define prod1  5.30
#define prod2  6.00
#define prod3  3.20
#define prod4  2.50
int main()
{
   float soma_produtos;
   int produtos_comprados, x, y, z, w;

   printf("digite quantos produtos de codigo 1 foram comprados: ");
   scanf("%d", &x);
   printf("digite quantos produtos de codigo 2 foram comprados: ");
   scanf("%d", &y);
   printf("digite quantos produtos de codigo 3 foram comprados: ");
   scanf("%d", &z);
   printf("digite quantos produtos de codigo 4 foram comprados: ");
   scanf("%d", &w);

   produtos_comprados = (x+y+z+w);
   soma_produtos = (prod1*x + prod2*y + prod3*z + prod4*w);

   if(produtos_comprados >= 15){
        printf("desconto concedido, o valor total eh:%.2f:\n", soma_produtos*0.85);
   }
   else if(soma_produtos >= 40){
        printf("desconto concedido, o valor total eh:%.2f:\n", soma_produtos*0.85);
   }
   else{
        printf("desconto nao concedido, o valor total eh:%.2f:\n", soma_produtos);
   }

   return 0;
}
