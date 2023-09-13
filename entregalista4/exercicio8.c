#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;

    printf("digite um numero para saber sua tabuada: ");
    scanf("%d",&num);

    for(i = 1; i <=10; i++){
        printf("%d x %d = %d\n",i,num,num*i);
    }
    return 0;
}
