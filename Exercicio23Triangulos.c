/*
CRIE UM PROGRAMA QUE RECEBA TRÊS VALORES (OBRIGATORIAMENTE MAIORES QUE ZERO), REPRESENTANDO AS MEDIDAS DOS TRÊS LADOS DE UM TRIÂNGULO. ELABORE FUNÇÕES PARA:

A) DETERMINAR SE ELES LADOS FORMAM UM TRIÂNGULO, SABENDO QUE: • O COMPRIMENTO DE CADA LADO DE UM TRIÂNGULO É MENOR DO QUE A SOMA DOS OUTROS DOIS LADOS.

B) DETERMINAR E MOSTRAR O TIPO DE TRIÂNGULO, CASO AS MEDIDAS FORMEM UM TRIÂNGULO. SENDO QUE:
• CHAMA-SE EQUILÁTERO O TRIÂNGULO QUE TEM TRÊS LADOS IGUAIS.
• DENOMINAM-SE ISÓSCELES O TRIÂNGULO QUE TEM O COMPRIMENTO DE DOIS LADOS IGUAIS.
• RECEBE O NOME DE ESCALENO O TRIÂNGULO QUE TEM OS TRÊS LADOS DIFERENTES.

JOAO PAULO ARAUJO VALVERDE DE SOUZA
UC24101226

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor[3];

    for (int i = 0; i < 3; i++) {
        printf("\nDIGITE O %d VALOR: \n", i + 1);
        scanf("%d", &valor[i]);
    }

    if ((valor[1] + valor[2] > valor[0]) && (valor[2] + valor[0] > valor[1]) && (valor[0] + valor[1] > valor[2])) {
        if (valor[0] == valor[1] && valor[1] == valor[2]) {
            printf("OS VALORES COINCIDEM COM O TRIANGULO EQUILÁTERO\n");
        } else if (valor[0] == valor[1] || valor[0] == valor[2] || valor[1] == valor[2]) {
            printf("OS VALORES COINCIDEM COM O TRIANGULO ISOSELES\n");
        } else {
            printf("OS VALORES COINCIDEM COM O TRIANGULO ESCALENO\n");
        }
    } else {
        printf("OS VALORES NAO COINCIDEM COM UM TRIANGULO\n");
    }

    return 0;
}

