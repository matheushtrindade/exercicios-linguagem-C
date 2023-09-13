#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("digite o valor de x e y: ");
    scanf("%d%d",&i,&j);

    for(i; i < j; i++){
        if(i%5 == 2 || i%5 == 3)
            printf("%d\n",i);
    }
    return 0;
}
