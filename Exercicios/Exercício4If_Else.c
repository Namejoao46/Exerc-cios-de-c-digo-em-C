/*FA�A UM PROGRAMA QUE LEIA DOIS N�MEROS INTEIROS
E IMPRIMA NA TELA QUAL � O MAIOR DELES OU SE S�O IGUAIS*/

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

    //Estruturas de condi��es, para saber qual valor e maior, ou se s�o iguais
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
