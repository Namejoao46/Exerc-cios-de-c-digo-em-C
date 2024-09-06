/*FAÇA UM PROGRAMA QUE RECEBA DOIS VALORES
E SOME ELES.
OBS; OS VALORES TEM QUE ESTAR ENTRE 5 E 10 APENAS ESTES SERÃO SOMADOS*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int valor1 = 0;
    int valor2 = 0;
    int soma;

    //ESTRUTURA DE REPETIÇÃO
    while(!(valor1 > 5 && valor1 < 10) || !(valor2 > 5 && valor2 < 10))
        {
            printf("INSIRA O PRIMEIRO VALOR ENTRE 5 E 10; \n");
            scanf("%d", &valor1);
            printf("INSIRA O SEGUNDO VALOR ENTRE 5 E 10; \n");
            scanf("%d", &valor2);

        }
    soma = valor1 + valor2;
    printf("\n O VALOR DA SOMA DOS NUMEROS E: %d", soma);
    return 0;
}
