#include <stdio.h>
#include <stdlib.h>

int main()
{
   int requisitos;
   printf("Requisito 1: Inferface grafica ou Inteligencia Artificial.\n");
   printf("Requisito 2: Encapsulamento e Indentacao.\n");
   printf("Requisito 3: Uso de Structs.\n");
   printf("---------------------------------------------------------------\n");
   printf("digite 0 se o trabalho nao possui tal requisito\n");
   printf("digite 1 se o trabalho possui tal requisito\n");
   printf("---------------------------------------------------------------\n");
   printf("seu trabalho possui o requisito 1: ");
   scanf("%d", &requisitos);

    if(requisitos == 0){
        printf("voce nao passou no primeiro requisito e sua nota eh 0\n");
        return 0;
    }
    else if(requisitos == 1){
        printf("seu trabalho passou no primeiro requisito\n");
    }


    printf("seu trabalho possui o requisito 2: ");
    scanf("%d", &requisitos);

     if(requisitos == 0){
        printf("voce nao passou no segundo requisito e sua nota eh 0\n");
        return 0;
     }
    else if(requisitos == 1){
        printf("seu trabalho passou no segundo requisito\n");
    }


    printf("seu trabalho possui o requisito 3: ");
    scanf("%d", &requisitos);

     if(requisitos == 0){
        printf("voce nao passou no terceiro requisito e sua nota eh 0\n");
        return 0;
     }
    else if(requisitos == 1){
        printf("seu trabalho passou no terceiro requisito\n");
    }


    else{
        printf("erro");
        return 0;
    }

    printf("---------------------------------------------------------------\n");
    printf("Parabens, seu trabalho sera corrigido");

    return 0;






}



