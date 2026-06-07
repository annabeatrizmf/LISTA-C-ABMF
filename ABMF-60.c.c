#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-60 - O Validador de Dias uteis *");
printf("\n****************************************************************\n"); 

    int dia;

    scanf("%d", &dia);

    switch(dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.");
            break;

        default:
            printf("Numero de dia invalido.");
    }

    return 0;
}



