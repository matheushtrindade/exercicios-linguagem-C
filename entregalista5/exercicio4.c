#include <stdio.h>
#include <stdlib.h>

int potencia(int i,int j){
    int expr=1;
    if(j==0){
    return 1;
    }
    else{
        while(j>0){
        expr *= i;
        j--;
        }
    }
}
int main()
{
    int num1,num2,resultado;
    scanf("%d%d",&num1,&num2);
    resultado = potencia(num1,num2);
    printf("%d",resultado);
    return 0;

}
