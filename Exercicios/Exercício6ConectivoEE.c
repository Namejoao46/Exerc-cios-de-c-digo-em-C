/*FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO
 E IMPRIMA NA TELA SE ELE ESTÁ ENTRE 0 E 10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO O VALOR
    int x = 0;
    printf("Insira o valor desejado\n ");
    scanf ("%d", &x);

    //se quiser adicionar mais uma condição e só ir colocando mais com o &&
    if (x > 0 && x < 10)
    {
        printf("Tudo nos conformes");
    }
    else
    {
        printf("valor inserido nao coincide");
    }
    return 0;
}
