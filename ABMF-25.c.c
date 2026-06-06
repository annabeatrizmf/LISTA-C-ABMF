#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
	printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-25 - notas e aprovacao *");
printf("\n****************************************************************\n"); 

    float media;

    scanf("%f",&media);

    if(media>=7)
        printf("Aprovado\n");
    else if(media>=5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
