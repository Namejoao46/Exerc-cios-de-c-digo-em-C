/*FAÇA UM PROGRAMA QUE O USUARIO DIGITE UM VALOR,
E O PROGRAMA IMPRIMA OS NUMERO PARES ATÉ O VALOR DIGITADO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int a;
    int b = 2;

    //ENTRADA DE VALORES
    printf("DIGITE UM VALOR: \n");
    scanf("%d", &a);

    //ESTRUTURA DE REPETIÇÃO
    while(b <= a)
    {
        //CONDIÇÃO PARA SABER SE O VALOR E IMPAR OU PAR
        if(b % 2 == 0){
            printf("%d \n", b);
        }

        //AQUI O NUMERO E TRANSFORMADO EM PAR ADICIONANDO MAIS 1
        b = b + 1;
    }
    printf("FIM");
    return 0;
}
