#include <stdio.h>
#include <stdlib.h>

int primo(int n){
    int cont,i;
    for(i=1;i<=n;i++)
        if(n%i==0){
            cont++;
        }
        if(cont==2){
            printf("o numero eh primo");
        }
        else{
            printf("o numero nao eh primo");
        }
}
int main()
{
    int num,resultado;
    printf("digite um numero inteiro: ");
    scanf("%d",&num);
    resultado = primo(num);
    return 0;

}
