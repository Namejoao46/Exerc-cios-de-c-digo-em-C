/*FAÇA UM PROGRAMA QUE LEIA 2 NÚMEROS INTEIROS
E IMPRIMA NA TELA SE ALGUM FOR PAR. DICA:
PARA SEPARAR OPERAÇÕES DE COMPARAÇÃO, USE PARÊNTESES.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO OS VALORES
    int a, b;
    printf("Insira o valor desejado\n ");
    scanf ("%d %d", &a, &b);

    //se quiser adicionar mais uma condição e só ir colocando mais com o && OU ||
    if ((a % 2==0) ||(b % 2 == 0))
    {
        printf("Tudo nos conformes");
    }
    else
    {
        printf("Nenhum dos valores inseridos coincidem");
    }
    return 0;
}
