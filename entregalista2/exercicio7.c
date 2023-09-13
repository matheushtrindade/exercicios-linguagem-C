#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, kilometros;
    float valor_total, valor_desconto;

    printf("o valor da diaria eh R$ 30,00\n");
    printf("cobramos R$ 0,01 por quilometro rodado\n");
    printf("estamos dando 10 por cento de desconto no valor total\n");


    printf("quantos dias ficou com o carro:");
    scanf("%d", &dias);
        if(dias < 1 || dias > 30){
            printf("ERRO\n");
            return 0;

    }
    printf("quantos kilometros foram rodados:");
    scanf("%d", &kilometros);
        if(kilometros < 1 || kilometros > 1000){
            printf("ERRO\n");
            return 0;


    }


    valor_total =(30*dias)+(0.01*kilometros);
    valor_desconto = valor_total*0.90;



    printf("o valor pago pelo aluguel eh:%.3f", valor_desconto);

    return 0;




}
