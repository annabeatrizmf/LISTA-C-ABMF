#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-28 - Soma dos 100 primeiros numeros naturais *");
printf("\n****************************************************************\n"); 

    int i,soma=0;

    for(i=1;i<=100;i++)
        soma += i;

    printf("Soma = %d\n",soma);

    return 0;
}
