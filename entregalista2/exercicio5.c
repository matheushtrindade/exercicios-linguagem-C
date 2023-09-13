#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D, diferenca;

    printf("digite o valor de A:");
    scanf("%d", &A);
    printf("digite o valor de B:");
    scanf("%d", &B);
    printf("digite o valor de C:");
    scanf("%d", &C);
    printf("digite o valor de D:");
    scanf("%d", &D);

    diferenca = (A*B)/(C*D);

    printf("o valor da diferenca entre A*B sobre C*D eh: %d", diferenca);
    return 0;
}
