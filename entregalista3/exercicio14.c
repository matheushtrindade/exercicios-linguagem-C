#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_percorrido;
    char tipo_carro;

    printf("exitem tres tipos de veiculos: A, B, C\n");
    printf("digite quantos kilometros foram percorridos: ");
    scanf("%f", &km_percorrido);
    printf("qual o tipo de veiculo usado: ");
    fflush(stdin);
    scanf("%c", &tipo_carro);

    switch(tipo_carro){

        case 'A':
            printf("o consumo estimado de combustivel do carro A foi de:%.2f",km_percorrido/15 );
            break;

        case 'B':
            printf("o consumo estimado de combustivel do carro B foi de:%.2f",km_percorrido/12 );
            break;

        case 'C':
            printf("o consumo estimado de combustivel do carro C foi de:%.2f",km_percorrido/10 );
            break;

        default:
            printf("ERRO");
    }

    return 0;
}
