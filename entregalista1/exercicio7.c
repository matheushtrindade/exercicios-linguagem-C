#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_depositado, valor_cafe = 7, valor_perdido;
    printf ("o valor do cafe em reais eh:%d\n", valor_cafe);
    printf ("nossa maquina so funciona com notas de 5 reais e seus multiplos\n");
    printf ("nossa maquina nunca da o troco\n");
    printf ("insira o valor para compra:");
    scanf ("%d", &valor_depositado);
    valor_perdido = valor_depositado%valor_cafe;
    printf("seu valor perdido foi: %d" , valor_perdido);
     return 0;
}
