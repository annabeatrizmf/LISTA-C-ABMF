#include <stdio.h> 
#include<stdlib.h>
#include<locale.h>

int main() {
printf("\n****************************************************************");
printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835 *");
printf("\n* Programa ABMF-57 - A Central do Brinquedo Eletronico *");
printf("\n****************************************************************\n"); 

    char cor[20];

    scanf("%s", cor);

    if(strcmp(cor,"Verde")==0)
        printf("Vamos brincar la fora!");
    else if(strcmp(cor,"Amarelo")==0)
        printf("Estou ficando com soninho...");
    else if(strcmp(cor,"Vermelho")==0)
        printf("Estou com fome, hora do lanche!");
    else
        printf("Cor desconhecida");

    return 0;
}



