/*Crie um algoritmo que leia 3 números inteiros de uma só vez
 e coloque os resultado da multiplicação entre os 3
 em uma variável própria, depois exiba essa variável.*/

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
