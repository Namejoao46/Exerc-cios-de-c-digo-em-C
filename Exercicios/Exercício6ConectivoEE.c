/*FA�A UM PROGRAMA QUE LEIA UM N�MERO INTEIRO
 E IMPRIMA NA TELA SE ELE EST� ENTRE 0 E 10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO O VALOR
    int x = 0;
    printf("Insira o valor desejado\n ");
    scanf ("%d", &x);

    //se quiser adicionar mais uma condi��o e s� ir colocando mais com o &&
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
