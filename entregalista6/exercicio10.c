#include <stdio.h>
#include <stdlib.h>
#define tam_vetor 20

int main()
{
    int vetor[tam_vetor],i=0,k=1;
    for(i;tam_vetor>i;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=19;i>=0;i--){
        printf("[%d] = %d\n",k,vetor[i]);
        k++;
    }
    return 0;
}

