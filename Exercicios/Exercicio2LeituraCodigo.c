/*Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez
 e coloque os resultado da multiplica��o entre os 3
 em uma vari�vel pr�pria, depois exiba essa vari�vel.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    //VARIAVEIS
    int valor1, valor2, valor3;

    //INSERINDO OS VALORES
    printf("Insira TRES valores saparados por espaco, EX: 1 9 2 \n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    //CALCULANDO
    int multi = valor1 * valor2 * valor3;

    //IMPRIMENDO
    printf("A multiplicacao dos valores e = %d ", multi);
}
