#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>
int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-43 - Soma dos pares entre 1 e 100 *");
printf("\n****************************************************************\n"); 

    int i = 2, soma = 0;

    while(i <= 100) {
        soma += i;
        i += 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
