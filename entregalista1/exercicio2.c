#include <stdio.h>
#include <stdlib.h>

int main()
{
   float notap1, notap2, notap3, notap4, media;
   printf("digite as notas da prova 1 2 3 4: ");
   scanf ("%f%f%f%f", &notap1, &notap2, &notap3, &notap4);
   media = (notap1*1.5+notap2*2+notap3*3+notap4*3.5)/10;
   printf ("media = %f", media);

}

