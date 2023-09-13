#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, operacao1, operacao2, operacao3, operacao4, x;

    printf("digite o valor de a:");
    scanf("%f",&a);
    printf("digite o valor de b:");
    scanf("%f",&b);
    printf("digite o valor de c:");
    scanf("%f",&c);

    x = (a*b*c);

    operacao1 = (a*b)/c;
    operacao2 = pow(a,a)+ b + 5*c;
    operacao3 = (x)+b+(5*c/3)-1;
    operacao4 = pow(x,3)/2;

    printf("a)%f\n",operacao1);
    printf("b)%f\n",operacao2);
    printf("c)%f\n",operacao3);
    printf("d)%f",operacao4);

    return 0;



}
