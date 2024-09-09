/*FAÇA UM PROGRAMA QUE MOSTRE A TABUADA,
DO NUMERO INFORMADO PELO USUARIO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int valor1 = 0;
    int valor2 = 0;

    //IMPRIMINDO NA TELA
    printf("INSIRA O VALOR DESEJADO; \n");
    scanf("%d", &valor2);

    //LAÇO DE REPETIÇÃO
    for(valor1 = 0; valor1 <= 10; valor1 = valor1 +1){
        printf("TABUADA DE; %d: %d * %d = %d \n", valor2, valor2, valor1, valor2 * valor1);
    }
    return 0;

}
