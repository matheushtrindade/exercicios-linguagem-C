#include <stdio.h>
#include <stdlib.h>

int tempo(int n1,int n2,int n3){
    int valor_tempo;
    n1 *= 3600;
    n2 *= 60;
    valor_tempo=n1+n2+n3;
    }
int main()
{
    int horas,minutos,segundos,resultado;
    printf("digite o valor de horas,minutos e segundo: ");
    scanf("%d%d%d",&horas,&minutos,&segundos);
    resultado = tempo(horas,minutos,segundos);
    printf("%d",resultado);
    return 0;


}
