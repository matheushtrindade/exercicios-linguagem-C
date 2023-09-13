#include <stdio.h>
#include <stdlib.h>
#define tam_vetor 10

 void LeVetor (int vet[],int tam){
    for(int i = 0;tam>i;i++)
        scanf("%d",&vet[i]);
}
int totalocorrencia(int vet[],int tam){
    int count = 0;
    for(int i = 0;tam>i;i++){
        if(vet[9]==vet[i]){
        count++;
        }
    }
    return count;
}

int main()
{
    int vetor[tam_vetor];
    int total;

    LeVetor(vetor,tam_vetor);
    total = totalocorrencia(vetor,tam_vetor);
    printf("o total de ocorrencia que o numero %d apareceu foi: %d",vetor[9],total);
}
