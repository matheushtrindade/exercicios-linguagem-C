#include <stdio.h>
#include <stdlib.h>
#define tam_vetor 50

int main()
{
    int vet[tam_vetor],i;

    for(i=0;tam_vetor>i;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;tam_vetor>i;i++){
        if(vet[i]%2==0){
            printf("par[%d] = %d\n",i,vet[i]);
        }
    }
    for(i=0;tam_vetor>i;i++){
        if(vet[i]%2==1){
            printf("impar[%d] = %d\n",i,vet[i]);
        }
    }
    return 0;
}
