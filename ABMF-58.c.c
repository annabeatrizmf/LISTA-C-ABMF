#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-58 - A Calculadora de Bolso de 4 Operacoes *");
printf("\n****************************************************************\n"); 

    float a, b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            if(b != 0)
                printf("%.2f", a / b);
            else
                printf("Divisao por zero!");
            break;
        default:
            printf("Operacao matematica nao reconhecida");
    }

    return 0;
}

