# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main() {
    printf("\n************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835         *");
    printf("\n* Programa ABMF-41 - Numero primo com while *");
    printf("\n************************************************************\n");
    
    int num, i = 2, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1)
        primo = 0;

    while(i < num) {
        if(num % i == 0) {
            primo = 0;
            break;
        }
        i++;
    }

    if(primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}
