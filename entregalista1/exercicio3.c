#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, cotacao_dolar, cotacao_euro, valor_dolar, valor_euro;
    printf(" digite o valor do produto em reais: ");
    scanf("%f",&reais);
    printf(" digite a cotacao do dolar: ");
    scanf("%f",&cotacao_dolar);
     printf(" digite a cotacao do euro: ");
    scanf("%f",&cotacao_euro);

    valor_dolar = reais/cotacao_dolar;
    valor_euro = reais/cotacao_euro;
    printf("valor do produto em dolar:%f\n", valor_dolar);
    printf("valor do produto em euro:%f", valor_euro);
    return 0;



}
