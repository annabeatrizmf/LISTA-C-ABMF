#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-47 - Tabuada de um numero *");
printf("\n****************************************************************\n"); 

    int n, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while(i <= 10);

    return 0;
}

