#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
	printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-24 - Pode votar? *");
printf("\n****************************************************************\n"); 

    int idade;

    scanf("%d",&idade);

    if(idade>=18)
        printf("Pode votar.\n");
    else
        printf("Nao pode votar.\n");

    return 0;
}
