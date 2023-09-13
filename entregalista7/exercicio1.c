#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 3

int main()
{
    int i, j;
    float numero[LIN][COL],soma_1 = 0, soma_2 = 0, soma_3 = 0, soma_4 = 0, soma_5 = 0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            scanf("%f",&numero[i][j]);
            if(i==0){
                soma_1 += numero[i][j];
            }
            else if(i==1){
                soma_2 += numero[i][j];
            }
            else if(i==2){
                soma_3 += numero[i][j];
            }
            else if(i==3){
                soma_4 += numero[i][j];
            }
            else{
                soma_5 += numero[i][j];
            }
        }
    }
    printf("a soma da primeira linha 1 eh: %.2f\n",soma_1);
    printf("a soma da primeira linha 2 eh: %.2f\n",soma_2);
    printf("a soma da primeira linha 3 eh: %.2f\n",soma_3);
    printf("a soma da primeira linha 4 eh: %.2f\n",soma_4);
    printf("a soma da primeira linha 5 eh: %.2f\n",soma_5);
    return 0;

}
