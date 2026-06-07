#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-53 -  Confirmar saida com 's' *");
printf("\n****************************************************************\n"); 

    char sair;

    do {
        printf("Executando operacao...\n");
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &sair);

    } while(sair != 's' && sair != 'S');

    return 0;
}

