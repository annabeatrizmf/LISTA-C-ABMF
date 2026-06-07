#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-52 - Soma ate o numero ser multiplo de 10 *");
printf("\n****************************************************************\n");

    int num, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;

    } while(num % 10 != 0);

    printf("Soma = %d\n", soma);

    return 0;
} 

