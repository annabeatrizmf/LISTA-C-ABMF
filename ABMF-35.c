#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-35 - Numeros de Fibonacci (n termos) *");
printf("\n****************************************************************\n"); 

    int n,i;
    int a=0,b=1,c;

    printf("Quantidade de termos: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
