#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-45 - Menu ate escolher sair *");
printf("\n****************************************************************\n"); 

    int opcao = 0;

    while(opcao != 3) {
        printf("\n1 - Opcao A");
        printf("\n2 - Opcao B");
        printf("\n3 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &opcao);
    }

    printf("Programa encerrado.\n");

    return 0;
}
