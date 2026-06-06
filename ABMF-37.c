#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-37 - Soma de numeros ate digitar zero *");
printf("\n****************************************************************\n"); 
    int num, soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        soma += num;
    } while(num != 0);

    printf("Soma = %d\n", soma);

    return 0;
}
