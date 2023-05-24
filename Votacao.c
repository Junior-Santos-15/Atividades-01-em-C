#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){


int idade;

printf("Digite a idade: ");
scanf("%d" ,&idade);

if (idade < 18 || idade >= 63){
    printf("Não obrigado a votar.");
} else {
    printf("Obrigado a votar!");
}


    return 0;
}