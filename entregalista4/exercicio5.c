#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    float media;

    printf("digite um numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        media += i;
    }
    printf("a media eh:%.2f",media/num);
    return 0;
}
