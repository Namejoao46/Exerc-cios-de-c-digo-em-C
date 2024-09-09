/* fAÇA UM PROGRAMA QUE IMPRIMA A SOMA DOS
NUMEROS DE 0 A 10, ADICIONADO O VALOR ATUAL
DE UMA VARIAVEL SOMA, A CADA REPETIÇÃO DO LAÇO FOR*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int a;
    int soma = 0;


    //LAÇO DE REPETIÇÃO FOR
    for (a = 0; a <= 20; a = a + 1){
        printf("contagem = %d, (soma: %d) \n", a, soma);

        soma = soma + a;
    }

    return 0;
}
