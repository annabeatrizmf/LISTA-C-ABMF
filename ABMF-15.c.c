#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float altCam, larCam, compCam;
    float altCx, larCx, compCx;
    int qtdCaixas;

    printf("\n************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835         *");
    printf("\n* Programa ABMF-15 - Caixas no Caminhao                   *");
    printf("\n************************************************************\n");

    printf("Altura do caminhao: ");
    scanf("%f", &altCam);

    printf("Largura do caminhao: ");
    scanf("%f", &larCam);

    printf("Comprimento do caminhao: ");
    scanf("%f", &compCam);

    printf("Altura da caixa: ");
    scanf("%f", &altCx);

    printf("Largura da caixa: ");
    scanf("%f", &larCx);

    printf("Comprimento da caixa: ");
    scanf("%f", &compCx);

    qtdCaixas = (int)(altCam / altCx) *
                (int)(larCam / larCx) *
                (int)(compCam / compCx);

    printf("\nQuantidade de caixas: %d\n", qtdCaixas);

    return 0;
}
