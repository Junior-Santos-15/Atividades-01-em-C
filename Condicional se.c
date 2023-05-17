#include <stdio.h>
#include <stdlib.h>



int main()
{

//Declaração das variáveis
float nota;

//Solicitando as informações    
printf("Digite o valor: \n");
scanf("%f",&nota);


system("cls");

//Resolução de resposta
printf("Valor: %f\n",nota);

if (nota == 10) {
    printf("O valor igual a 10! \n");
} else if (nota > 10) {
    printf("O valor maior que 10! \n");
} else {
    printf("O valor menor que 10! \n");
}

system("pause");

    return 0;
}
