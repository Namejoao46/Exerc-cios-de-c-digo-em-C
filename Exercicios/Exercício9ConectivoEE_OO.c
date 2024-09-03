/*Faça um programa que leia dois numeros inteiros e imprima na tela
se a soma deles estiver entre 0 e 10, ou se a soma deles for par*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //entrada de valores
    int a, b;
    printf("Insira o valor desejado\n ");
    scanf ("%d %d", &a, &b);

    //calculo e condições
    int soma = a+b;
    if (soma > 0 && soma < 10 || soma % 2==0)
    {
        printf("tudo nos conformes");
    }
    else
    {
        printf("Nao coincide com os requisitos");
    }
    return 0;
}
