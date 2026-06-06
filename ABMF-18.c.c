# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {

    printf("\n************************************************************");
    printf("\n* Aluna: ANNA BEATRIZ MARTINS FREITAS - RA 0027835         *");
    printf("\n* Programa ABMF-18 - Login simples                         *");
    printf("\n************************************************************\n");
    
    char usuario[20], senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(usuario,"admin")==0 && strcmp(senha,"2611")==0)
        printf("Acesso permitido.\n");
    else
        printf("Acesso negado.\n");

    return 0;
}
