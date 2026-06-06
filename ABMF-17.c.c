# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {

    printf("\n************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835         *");
    printf("\n* Programa ABMF-17 - O Sensor do Parque Temático           *");
    printf("\n************************************************************\n");
    
     int altura;

    printf("Digite a altura em cm: ");
    scanf("%d", &altura);

    if (altura >= 140)
        printf("Liberado.\n");
    else
        printf("Barrado.\n");

    return 0;
    
}

