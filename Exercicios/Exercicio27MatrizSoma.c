/*
CRIE UMA FUNÇÃO COM UMA MATRIZ 3X3 QUE ARMAZENE VALORES INSERIDOS PELO USUARIO,
APÓS ISSO SOME DETERMINADOS PONTOS DA MATRIZ.

JOAO PAULO ARAUJO VALVERDE DE SOUZA
UC24101226
*/

#include <stdio.h>
#include <stdlib.h>

int calculo(int matriz[3][3]){
    int soma = 0;

    soma = matriz[1][2] + matriz[0][1] + matriz[0][2];

    return soma;
}

int main(){
    int calculo1;
    int matriz[3][3];
    int a, b;


    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            printf("DIGITE O VALOR DA LINHA %d E COLUNA %d:\n", a, b);
            scanf("%d", &matriz[a][b]);
        }
    }
    for(a = 0; a < 3; a++){
        for(b = 0; b < 3; b++){
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }

    calculo1 = calculo(matriz);

    printf("O VALOR DA SOMA E DE; %d\n", calculo1);


return 0;
}
