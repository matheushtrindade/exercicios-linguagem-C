#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int idade;

    printf("digite sua altura: ");
    scanf("%f", &altura);
    printf("digite sua idade: ");
    scanf("%d", &idade);

        if(altura >= 1.7 && idade >=16){
        printf("voce pode ir nos brinquedos: Final Killer, Elevator of Death e Barca Viking");
        }
            else if(altura < 1.7 && altura >=1.5 && idade >=12 && idade <14){
        printf("voce pode ir no brinquedo: Barca Viking");
            }
            else if(altura < 1.7 && altura >=1.5 && idade >=14){
        printf("voce pode ir no brinquedo: Barca Viking e Elevator of Death");
            }
            else if(altura <= 1.4 && idade >=14){
        printf("voce pode ir no brinquedo: Elevator of Death");
            }
            else{
        printf("voce nao pode ir em nenhum brinquedo");
            }

    return 0;


}
