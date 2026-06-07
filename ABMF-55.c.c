#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-55 - Ler numeros e mostrar o maior (ate digitar negativo) *");
printf("\n****************************************************************\n"); 

    int num, maior = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > maior)
            maior = num;

    } while(num >= 0);

    printf("Maior numero informado: %d\n", maior);

    return 0;
}

