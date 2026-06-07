#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-49 - Pedir senha ate acertar *");
printf("\n****************************************************************\n"); 

    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while(senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}

