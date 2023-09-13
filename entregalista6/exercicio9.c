#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    float vetor[n];
    int i;
    for(i=0;n>i;i++){
        scanf("%f",&vetor[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}


