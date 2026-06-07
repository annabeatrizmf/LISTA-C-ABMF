#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-42 - Quantidade de numeros impares digitados *");
printf("\n****************************************************************\n"); 

    int num, i = 1, qtd = 0;

    while(i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if(num % 2 != 0)
            qtd++;

        i++;
    }

    printf("Quantidade de impares: %d\n", qtd);

    return 0;
}
