#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-51 - Contagem regressiva de 10 ate 1 *");
printf("\n****************************************************************\n"); 

    int i = 10;

    do {
        printf("%d\n", i);
        i--;
    } while(i >= 1);

    return 0;
}

