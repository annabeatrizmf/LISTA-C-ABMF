#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-27 - Tabuada de um numero *");
printf("\n****************************************************************\n"); 

    int n,i;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);

    return 0;
}
