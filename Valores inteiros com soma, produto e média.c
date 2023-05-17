#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração das varáveis
int valor1, valor2;
float soma;
float produto;
float media;

//Solicitando as informações
printf("Digite a primeira nota: \n");
scanf("%d",&valor1);
printf("Digite a segunda nota: \n");
scanf("%d",&valor2);


soma = valor1 + valor2;
produto = valor1 * valor2;
media = valor1 + valor2 / 2;

system("cls");

//Resolução da resposta

printf("Primeiro valor: %d\n",valor1);
printf("Segundo valor: %d\n",valor2);
printf("Soma: %f\n",soma);
printf("Produto: %f\n",produto);
printf("Media: %f\n",media);


system("pause");   
    return 0;
}