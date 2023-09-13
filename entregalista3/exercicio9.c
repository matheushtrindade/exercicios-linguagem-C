#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x, y;

   printf("vamos descobrir em qual quadrante sua coordenada esta\n");
   printf("digite o valor de x: ");
   scanf("%f", &x);
   printf("digite o valor de y: ");
   scanf("%f", &y);

   if(x > 0 && y > 0){
    printf("o ponto esta no primeiro quadrante");
   }
        else if(x < 0 && y > 0){
    printf("o ponto esta no segundo quadrante");
        }
        else if(x < 0 && y < 0){
    printf("o ponto esta no terceiro quadrante");
        }
        else if(x > 0 && y < 0){
    printf("o ponto esta no quarto quadrante");
        }
        else if(x && y == 0){
    printf("o ponto esta no eixo x");
        }
        else if(x == 0 && y){
    printf("o ponto esta no eixo y");
        }
        else{
    printf("o ponto esta na origem");
        }

   return 0;
}
