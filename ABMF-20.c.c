#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

   int main() {
   	printf("\n****************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
    printf("\n* Programa ABMF-20 - Ano bissexto *");
    printf("\n****************************************************************\n"); 
      
    int ano;

    scanf("%d",&ano);

    if((ano%4==0 && ano%100!=0) || ano%400==0)
        printf("Ano bissexto.\n");
    else
        printf("Nao bissexto.\n");

    return 0;
}
