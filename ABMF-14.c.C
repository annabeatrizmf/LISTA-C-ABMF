# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {

    float a, b, c;

    printf("\n************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835         *");
    printf("\n* Programa ABMF-14 - Tipo de Triangulo                    *");
    printf("\n************************************************************\n");

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);

    printf("Digite o segundo lado: ");
    scanf("%f", &b);

    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a == b && b == c)
        printf("Triangulo Equilatero\n");
    else if (a == b || a == c || b == c)
        printf("Triangulo Isosceles\n");
    else
        printf("Triangulo Escaleno\n");

    return 0;
}
