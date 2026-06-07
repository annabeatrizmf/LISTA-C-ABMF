#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-44 - Contar digitos de um numero *");
printf("\n****************************************************************\n"); 

    int num, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num > 0) {
        cont++;
        num /= 10;
    }

    printf("Quantidade de digitos: %d\n", cont);

    return 0;
}
