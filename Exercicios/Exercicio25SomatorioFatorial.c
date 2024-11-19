/*
CRIE UMA FUNÇÃO QUE SOME TODOS OS NUMEROS ABAIXO
DE UM NUMERO INSERIDO PELO USUARIO.
OBS; PODE COLOCAR PARA SOMAR SÓ OS NUMEROS PARES, OU IMPARES E TODOS,
PARA DIFICULTAR O CODIGO.

JOAO PAULO ARAUJO VALVERDE DE SOUZA
UC24101226
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //INSERINDO VARIAVEIS
    int valor, soma, menu;

    //MENU
    printf("QUAL TIPO DE SOMA DE NUMEROS FATORIAS DESEJA;\n");
    printf("1---PARES----\n2--IMPARES---\n3---TODOS----\n");
    scanf("%d", &menu);

    //INSTRUÇÃO DE ESCOLHA
    switch(menu){

        //CASOS
        case 1:
            //SOMATORIO DE NUMEROS PARES
            printf("\nDIGITE O VALOR DESEJADO;\n");
            scanf("%d", &valor);
                for(int i = 0; i <= valor; i++){
                    if(i %2 == 0){
                        soma = soma + i;
                    }
                }
            printf("O RESULTADO DA SOMA E; %d\n", soma);
            break;

        case 2:
            //SOMATORIO DE NUMEROS IMPARES
            printf("\nDIGITE O VALOR DESEJADO;\n");
            scanf("%d",&valor);
                for(int i = 0; i <= valor; i++){
                    if(i %2 != 0){
                        soma = soma + i;

                    }
                }
            printf("O RESULTADO DA SOMA E; %d\n", soma);
            break;

        case 3:
            //SOMATORIO DE TODOS OS NUMEROS
            printf("\nDIGITE O VALOR DESEJADO;\n");
            scanf("%d",&valor);
            for(int i = 0; i <= valor; i++){
                soma = soma + i;
            }
            printf("O RESULTADO DA SOMA E; %d\n", soma);
            break;

    }

    return 0;
}
