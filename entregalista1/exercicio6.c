#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;

    printf ("digite um valor para x: ");
    scanf("%f",&x);
    printf ("digite um valor para y: ");
    scanf("%f", &y);

    z = x;
    x = y;
    y = z;

    printf ("x:%f\n" , x);
    printf ("y:%f" , y);
    return 0;



}
