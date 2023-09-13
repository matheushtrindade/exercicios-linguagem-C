#include <stdio.h>
#include <stdlib.h>

int main()
{
   float base, altura, area;

    printf("digite o valor da base:");
    scanf("%f", &base);
    printf("digite o valor da altura:");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("o valor da area eh:%.2f" , area);
    return 0;

}
