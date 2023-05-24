#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomeSalvo[50] = "JUNIOR", senhaSalva[50] = "123";
    char login[50], senha[50];

    printf("Digite o seu login: ");
    scanf("%s",&login);


    printf("Digite a sua senha: ");
    scanf("%s",&senha);

    if(strcmp(login, nomeSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
        printf("Acesso liberado.");
    } else {
        printf("Acesso negado.");
    }


    return 0;
}