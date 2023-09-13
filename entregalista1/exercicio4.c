#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, minutos, segundos, valor;
    printf ("digite as horas:" );
    scanf ("%f",&horas);
    printf ("digite os minutos");
    scanf ("%f", &minutos);
    printf ("digite os segundos");
    scanf("%f", &segundos);

    horas = horas*3600;
    minutos = minutos*60;
    segundos = segundos;
    valor = (horas+minutos+segundos);
    printf ("o valor corresponde em segundos eh:%f",valor);
    return 0;


}
