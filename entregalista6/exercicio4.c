#include <stdio.h>
#include <stdlib.h>
#define tam_vetor 21

int main()
{
    int vetor[tam_vetor],i;

    for(i=0;tam_vetor>i;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;tam_vetor-1>i;i++){
       if(vetor[20] == vetor[i]){
        printf("o ultimo numero lido esta presente nos 20 primeiros\n");
        printf("[%d] = [%d]\n",i,vetor[i]);
        printf("[20] = [%d]\n",vetor[20]);
        break;
       }
       else{

       }
    }
    return 0;
}
