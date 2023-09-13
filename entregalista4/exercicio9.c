#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,cont=0;

    printf("digite um numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
        if(num%i==0){
            cont++;
        }
        if(cont==2){
            printf("o numero %d eh primo",num);
        }
        else{
            printf("o numero %d nao eh primo",num);
        }

    return 0;


}
