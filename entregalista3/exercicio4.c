#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a, b, c, delta, x1, x2;

   printf(" equacao de segundo grau: (ax2 + bx + c = 0).\n");
   printf("---------------------------------------------------\n");

   printf("digite o valor de A:");
   scanf("%f", &a);
   printf("digite o valor de B:");
   scanf("%f", &b);
   printf("digite o valor de C:");
   scanf("%f", &c);

        if(a == 0){
            printf("nao eh uma equacao de segundo grau\n");
            return 0;
        }
        else{
            delta = pow(b,2)-(4*a*c);
        }

        if(delta < 0){
            printf("nao existe raizes reais\n");
        }
        else if (delta == 0){
            x1 = -b /(2*a);
            printf("a equacao possui apenas uma raiz real:%.2f\n", x1);
        }
        else{
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("as raizes sao : x1: %.2f e x2: %.2f\n",x1, x2);

        }
    return 0;

}
