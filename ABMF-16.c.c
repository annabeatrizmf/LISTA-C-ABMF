#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	printf("\n****************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835             *");
    printf("\n* Programa ABMF-16 - Multiplo de 3 e/ou 5                     *");
    printf("\n****************************************************************\n");

    int n;

    printf("Digite o numero do pedido: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Ganhou refrigerante e sobremesa!\n");
    else if (n % 3 == 0)
        printf("Ganhou refrigerante!\n");
    else if (n % 5 == 0)
        printf("Ganhou sobremesa!\n");
    else
        printf("Nao ganhou premio.\n");

    return 0;
}
