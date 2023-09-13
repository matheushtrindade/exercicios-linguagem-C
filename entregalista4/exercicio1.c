#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("digite o inicio e o final do programa: ");
    scanf("%d%d",&i,&j);

    for(i;i<j;i++){
       if(i%2 == 1)
       printf("%d\n",i);
    }
    return 0;
}
