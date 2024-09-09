/*FAÇA UM PROGRMA QUE O USUARIO DIGITE
O VALOR INICIAL, O VALOR FINAL E DE
QUANTO EM QUANTO CHEGARÁ AO VALOR DESEJADO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INSERINDO VARIAVEIS
    int valorInicial, valorFinal, repeticao;
    printf("DIGITE O VALOR INICIAL; \n");
    scanf("%d", &valorInicial);
    printf("DIGITE O VALOR FINAL; \n");
    scanf("%d", &valorFinal);
    printf("DIGITE O VALOR DA REPETIÇÃO; \n");
    scanf("%d", &repeticao);

    //LAÇO DE REPETIÇÃO
    for(valorInicial; valorInicial <= valorFinal; valorInicial = valorInicial + repeticao){
        printf("%d:%d \n", valorInicial, valorFinal);
    }
    return 0;
}
