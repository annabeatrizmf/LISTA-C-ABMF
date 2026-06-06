#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-39 - Verificar se um numero e positivo *");
printf("\n****************************************************************\n"); 

    int num;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    } while(num <= 0);

    printf("Numero valido!\n");

    return 0;
}

