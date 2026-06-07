#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-59 -  O Assistente de Direcao (GPS Sem Mapa) *");
printf("\n****************************************************************\n"); 

    char letra;

    scanf(" %c", &letra);

    switch(letra) {
        case 'N':
            printf("Seguir para o Norte.");
            break;
        case 'S':
            printf("Seguir para o Sul.");
            break;
        case 'L':
            printf("Virar a Leste (Direita).");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).");
            break;
        default:
            printf("Comando invalido! Pare o robo.");
    }

    return 0;
}

