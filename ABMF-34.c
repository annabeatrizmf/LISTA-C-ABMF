#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-34 - Verificar se um numero e primo *");
printf("\n****************************************************************\n"); 

    int n,i,primo=1;

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(n<=1)
        primo=0;

    for(i=2;i<n;i++) {
        if(n%i==0) {
            primo=0;
            break;
        }
    }

    if(primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}
