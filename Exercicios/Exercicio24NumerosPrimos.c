/*
CRIE UMA FUNÇÃO QUE IMPRIMA OS NUMEROS PRIMOS ABAIXO
DO NUMERO INSERIDO PELO USUARIO

JOAO PAULO ARAUJO VALVERDE DE SOUZA
UC24101226
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    //INSERINDO VARIAVEL
    int valor;

    // VALOR DIGITADO PELO USUARIO
    printf("DIGITE O VALOR DESEJADO: \n");
    scanf("%d", &valor);

    // VERIFICA CADA NUMERO ATE O VALOR DIGITADO DE 2 EM 2
    for (int a = 2; a <= valor; a++) {
        int numeroPrimo = 1;  // ASSUME QUE O NUMERO 1 E PRIMO

        // VERIFICA SE O VALOR DIGITADO TEM DIVISORES ALÉM DE 1 E DELE MESMO
        for (int b = 2; b <= a / 2; b++) {
            if (a % b == 0) {
                numeroPrimo = 0;  // NAO E PRIMO
                break;  // SAI DO LOOP
            }
        }

        // SE FOR PRIMO, IMPRIME O NUMERO
        if (numeroPrimo) {
            printf("%d ", a);
        }
    }

    return 0;
}







