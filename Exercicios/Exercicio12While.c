/*FAÇA UM PROGRAMA QUE IMPRIMA DE 50 A 0, DIMINUINDO DE 6 EM 6.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int a = 50;

    //ESTRUTURA DE REPETIÇÃO
    while(a > 0)
    {
        printf("%d \n", a);
        a = a - 6;
    }

    //FIM
    printf("FIM");

    return 0;
}
