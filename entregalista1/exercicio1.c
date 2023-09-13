#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, perimetro, area;
    printf("digite o valor do raio:" );
    scanf("%f",&raio);

    perimetro = 2*3.14*raio;
    area = 3.14*raio*raio;
    printf("raio=%f\nperimetro=%f\narea=%f\n",raio,perimetro,area);
    return 0;


}

