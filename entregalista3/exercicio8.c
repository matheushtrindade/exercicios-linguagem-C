#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int op;


    printf("digite o numero  x: ");
    scanf("%f", &x);
    printf("digite o numero  y: ");
    scanf("%f", &y);
    printf("-----------------------------------------------------\n");
    printf("1-media aritmetica\n2-diferenca entre o maior e o menor\n3-produto\n4-divisao\ndigite a operacao: ");
    scanf("%d", &op);


        switch(op){

            case 1:
                printf("sua media aritmetica eh:%.2f", (x+y)/2);
                break;

            case 2:
                x > y ? printf("a diferenca eh:%.2f", x-y) : printf("a diferenca eh:%.2f", y-x);
                break;

            case 3:
                printf("o produto eh:%.2f", x*y);
                break;

            case 4:
                y == 0 ? printf("erro") : printf("a divisao eh:%.2f", x/y);
                break;

            default:
                printf("erro");

        }







        return 0;





}
