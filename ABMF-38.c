#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>
int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-38 - senha correta *");
printf("\n****************************************************************\n"); 
    int senha;

    while(senha != 1234) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado!\n");

    return 0;
}
