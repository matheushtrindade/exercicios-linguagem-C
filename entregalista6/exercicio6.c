#include <stdio.h>
#include <stdlib.h>
void LeVetor(int vet[], int tam){
    for(int i = 0;tam>i;i++)
        scanf("%d",&vet[i]);
    }
void ImprimeVetor(int vet[],int tam){
    for(int i = 0;tam>i;i++)
    if(vet[i]%7==0){
        printf("[%d] = %d\n",i,vet[i]);
    }
    }

int main()
{
    int tam_vetor;
    printf("digite o tamanho do vetor: ");
    scanf("%d",&tam_vetor);
    int vetor[tam_vetor];
    LeVetor(vetor,tam_vetor);
    ImprimeVetor(vetor,tam_vetor);
    return 0;
}
