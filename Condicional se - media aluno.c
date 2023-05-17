#include <stdio.h>
#include <stdlib.h>

int main()
{

//Declaração das variáveis
char nome[50];
int idade;
float nota1, nota2, nota3;
float media;

//Solicitando as informações
printf("Digite o nome do aluno: \n");
scanf("%s",&nome);
printf("Digite a sua idade: \n");
scanf("%d",&idade);
printf("Digite a primeira nota: \n");
scanf("%f",&nota1);
printf("Digite a segunda nota: \n");
scanf("%f",&nota2);
printf("Digite a terceira nota: \n");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

system("cls");

//Resolução da resposta
printf("Nome do aluno: %s\n",nome);
printf("A idade do aluno: %d\n",idade);
printf("Primeira nota: %f\n",nota1);
printf("Segunda nota: %f\n",nota2);
printf("Terceira nota: %f\n",nota3);
printf("Media: %f\n",media);

if (media >= 7){
    printf("Aprovado! \n");
}else if(media >= 5){
    printf("Recuperação! \n");
}else{
    printf("Reprovado! \n");
}

system("pause");
    return 0;
}