#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-33 - Multiplos de 3 entre 1 e 30 *");
printf("\n****************************************************************\n"); 

    int i;

    for(i=3;i<=30;i+=3)
        printf("%d\n",i);

    return 0;
}
