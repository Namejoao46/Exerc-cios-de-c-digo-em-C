/*FAÇA UM PROGRAMA QUE LEIA 3 NÚMEROS INTEIROS
 E IMPRIMA NA TELA SE OS 3 SÃO MAIORES QUE 10*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    //INSERINDO OS VALORES
    int a, b, c;
    printf("INSIRA OS VALORES; \n");
    scanf("%d %d %d", &a, &b, &c);

    //ESTRUTURA CONDICIONAL
    if (a > 10 && b > 10 && c > 10){
        printf("OS VALORES SAO MAIORES QUE 10");
    } else{
        printf("ALGUM DOS VALORES NAO COINCIDEM COM A CONDICAO");
    }
    return 0;
}
