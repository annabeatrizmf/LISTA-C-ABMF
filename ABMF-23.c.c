#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>


printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-40 -  Tabuada com while *");
printf("\n****************************************************************\n");
int main() {
    int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
} 

