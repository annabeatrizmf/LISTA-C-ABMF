#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-56 - O Menu do Fast-Food Digital *");
printf("\n****************************************************************\n"); 

    int opcao;

    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00");
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}

