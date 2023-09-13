#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n],i;

    for(i=0;n>i;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("[%d] = %d\n",i+1,vetor[i]);
    }
    return 0;
}
