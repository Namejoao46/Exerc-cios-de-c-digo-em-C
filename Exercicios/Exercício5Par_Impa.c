/*FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO
E INFORME SE ELE É PAR OU NÃO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEL
    int numero1;

    //ENTRADE DE VALORES
    printf ("INSIRA O VALOR ");
    scanf("%d", &numero1);

    //ESTRUTURA CONDICIONAL
    if (numero1 %2 == 0){
        printf("Numero par");

    }else{
        printf("Numero impar");

    }

    return 0;
}
