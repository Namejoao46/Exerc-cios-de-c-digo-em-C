/*FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS INTEIROS E IMPRIMA NA TELA SE A SOMA DELES É:
MAIOR/IGUAL A 10 OU MENOR QUE 10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    float numero1;
    float numero2;

    //ENTRADA DE VALORES E SOMA
    printf ("INSIRA O PRIMEIRO VALOR; \n ");
    scanf ("%f", &numero1);
    printf ("INSIRA O SEGUNDO VALOR; \n ");
    scanf ("%f", &numero2);
    float soma = numero1 + numero2;

    //ESTRUTURA CONDICIONAL
    if(soma >= 10)
    {
        printf (" \n SOMA MAIOR OU IGUAL a 10");
    }
    else
    {
        printf("\n MENOR QUE 10");
    }

    return 0;

}
