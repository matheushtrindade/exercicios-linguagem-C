#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1,qtd_mult7=0;
    float soma;

    while(num != 0){
        scanf("%d",&num);
        if(num>10 && num<50 && num%7==0){
            qtd_mult7++;
            soma += num;
        }
        else{

        }
    }
    printf("quantidade multiplos de 7 no intervalo (10,50):%d\n",qtd_mult7);
    printf("media desses numeros:%.2f\n",soma/qtd_mult7);
    return 0;


}
