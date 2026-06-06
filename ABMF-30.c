#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-30 - Fatorial de um numero *");
printf("\n****************************************************************\n");

    int n,i;
    long long fat=1;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fat *= i;

    printf("Fatorial = %lld\n",fat);

    return 0;
}
