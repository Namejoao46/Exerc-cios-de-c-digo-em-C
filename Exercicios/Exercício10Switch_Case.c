/*FAÇA UM PROGRAMA DE CALCULADORA, QUE LEIA
DOIS VALORES E MOSTRE AS OPÇÕES DE SOMAR OU
SUBTRAIR. APÓS SELECIONAR A OPÇÃO, O RESULTADO
SERÁ MOSTRADO NA TELA, BASEADO EM UM SWITCH.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, opcao, resultado;

    //MENU
    printf("-------calculadora-------\n");
    printf("1----------soma----------\n");
    printf("2--------subtrair--------\n");
    printf("3------multiplicar-------\n");
    printf("4--------dividir---------\n");
    printf("---SELECIONE-UMA-OPCAO---\n");

    //ESTRUTURA CONDICIONAL
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        //SOMA
        printf("ADICIONE OS VALORES PARA A SOMA: \n");
        scanf("%d %d", &a, &b);
        resultado = a + b;
        printf("O RESULTADO DA SOMA E DE: %d", resultado );
        break;

    case 2:
        //SUBTRAÇÃO
        printf("ADICIONE OS VALORES PARA A SUBTRACAO: \n");
        scanf("%d %d", &a, &b);
        resultado = a - b;
        printf("O RESULTADO DA SUBTRACAO E DE: %d", resultado);
        break;

    case 3:
        //MULTIPLICAÇÃO
        printf("ADICIONE OS VALORES PARA A MULTIPLICACAO: \n");
        scanf("%d %d", &a, &b);
        resultado = a * b;
        printf("O RESULTADO DA MULTPLICACAO E DE: %d", resultado);
        break;

    case 4:
        //DIVISÃO
        printf("ADICIONE OS VALORES PARA A DIVISAO: \n");
        scanf("%d %d", &a, &b);
        resultado = a / b;
        printf("O RESULTADO DA DIVISAO E DE: %d", resultado);
        break;

    }
    printf("\n ENCERRANDO O PROGRAMA");
    return 0;
}
