#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
	printf("\n****************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
    printf("\n* Programa ABMF-19 -  Ordem crescente (tres numeros) *");
    printf("\n****************************************************************\n"); 

    int a,b,c,temp;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b){temp=a;a=b;b=temp;}
    if(a>c){temp=a;a=c;c=temp;}
    if(b>c){temp=b;b=c;c=temp;}

    printf("%d %d %d\n",a,b,c);

    return 0;
}
