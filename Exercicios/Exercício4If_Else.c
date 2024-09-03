/*FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS INTEIROS
E IMPRIMA NA TELA QUAL É O MAIOR DELES OU SE SÃO IGUAIS*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    float numero1;
    float numero2;

    //inserindo os valores
    printf ("INSIRA O PRIMEIRO VALOR; \n ");
    scanf ("%f", &numero1);
    printf ("INSIRA O SEGUNDO VALOR; \n ");
    scanf ("%f", &numero2);

    //Estruturas de condições, para saber qual valor e maior, ou se são iguais
    if(numero1 == numero2)
    {
        printf (" \n Os valores sao iguais");
    }
    else if(numero1 < numero2)
    {
        printf("\n O segundo valor e maior");
    }
    else
    {
        printf("\n O primeiro valor e maior");
    }

    return 0;

}
