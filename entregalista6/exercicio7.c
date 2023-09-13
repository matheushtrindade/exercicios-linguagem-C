#include <stdio.h>
#include <stdlib.h>

void LeVetor(int vet[],int tam){
    for(int i = 0;tam>i;i++)
        scanf("%d",&vet[i]);
}
void ImprimeVetor(int vet[],int tam){
    int i=0,maior_valor = 0;
    for(i;tam>i;i++){
        if(vet[i]>maior_valor){
            maior_valor = vet[i];
        }
    }
    printf("%d\n",maior_valor);
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
