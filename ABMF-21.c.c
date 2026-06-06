#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
	
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-21 - Numero positivo ou negativo *");
printf("\n****************************************************************\n"); 

    float n;

    scanf("%f",&n);

    if(n>0)
        printf("Positivo\n");
    else if(n<0)
        printf("Negativo\n");
    else
        printf("Zero\n");

    return 0;
}

