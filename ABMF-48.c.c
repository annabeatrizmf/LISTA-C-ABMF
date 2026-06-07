#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-48 - Menu com opção de sair *");
printf("\n****************************************************************\n"); 

    int opcao;

    do {
        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao == 1)
            printf("Voce escolheu a mensagem!\n");

    } while(opcao != 2);

    return 0;
}
