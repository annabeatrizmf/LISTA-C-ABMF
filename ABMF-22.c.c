#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-22 -  Par ou impar *");
printf("\n****************************************************************\n"); 

    int n;

    scanf("%d",&n);

    if(n%2==0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
