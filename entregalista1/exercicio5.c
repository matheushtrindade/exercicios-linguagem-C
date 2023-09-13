#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float ax, ay, bx, by, difx, dify, distancia;
    printf("digite o valor de ax:");
    scanf("%f",&ax);
    printf("digite o valor de ay:");
    scanf("%f",&ay);
    printf("digite o valor de bx:");
    scanf("%f",&bx);
    printf("digite o valor de by:");
    scanf("%f",&by);

    difx = pow((bx-ax),2);
    dify = pow((by-ay),2);
    distancia = sqrt((difx+dify));
    printf ("a distancia entre a e b eh:%f",distancia);
    return 0;



}
