#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    printf("digite o terceiro numero: ");
    scanf("%d", &n3);

    if(n1<n2 && n2<n3){
        printf("a ordem decrescente eh: %d %d %d",n3,n2,n1);
    }
    else if(n1<n3 && n3<n2){
        printf("a ordem decrescente eh: %d %d %d",n2,n3,n1);
    }
    else if(n2<n1 && n1<n3){
        printf("a ordem decrescente eh: %d %d %d",n3,n1,n2);
    }
    else if(n2<n3 && n3<n1){
        printf("a ordem decrescente eh: %d %d %d",n1,n3,n2);
    }
    else if(n3<n2 && n2<n1){
        printf("a ordem decrescente eh: %d %d %d",n1,n2,n3);
    }
    else {
        printf("a ordem decrescente eh: %d %d %d",n2,n1,n3);
    }

return 0;
}
