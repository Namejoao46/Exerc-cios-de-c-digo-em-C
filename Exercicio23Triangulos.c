/*
CRIE UM PROGRAMA QUE RECEBA TR�S VALORES (OBRIGATORIAMENTE MAIORES QUE ZERO), REPRESENTANDO AS MEDIDAS DOS TR�S LADOS DE UM TRI�NGULO. ELABORE FUN��ES PARA:

A) DETERMINAR SE ELES LADOS FORMAM UM TRI�NGULO, SABENDO QUE: � O COMPRIMENTO DE CADA LADO DE UM TRI�NGULO � MENOR DO QUE A SOMA DOS OUTROS DOIS LADOS.

B) DETERMINAR E MOSTRAR O TIPO DE TRI�NGULO, CASO AS MEDIDAS FORMEM UM TRI�NGULO. SENDO QUE:
� CHAMA-SE EQUIL�TERO O TRI�NGULO QUE TEM TR�S LADOS IGUAIS.
� DENOMINAM-SE IS�SCELES O TRI�NGULO QUE TEM O COMPRIMENTO DE DOIS LADOS IGUAIS.
� RECEBE O NOME DE ESCALENO O TRI�NGULO QUE TEM OS TR�S LADOS DIFERENTES.

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
            printf("OS VALORES COINCIDEM COM O TRIANGULO EQUIL�TERO\n");
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

