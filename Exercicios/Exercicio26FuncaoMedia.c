/*
CRIE UM FUNÇÃO QUE CONTENHA UM VETOR COM NUMEROS INSERIDOS PELO USUARIO
E SOME TODOS OS NUMEROS DO VETOR, APÓS ISSO DE A MEDIA PARA O USUARIO.

JOAO PAULO ARAUJO VALVERDE DE SOUZA
UC24101226
*/
#include <stdio.h>
#include <stdlib.h>

int calculo(int vetor[], int tamanho){
    int soma = 0;
    for(int b = 0; b < tamanho; b++){
        soma = soma + vetor[b];
    }

    soma = soma / tamanho;
    return soma;

}


int main(){
    int a, b, tamanho;

    printf("QUAL O TAMANHO DO VETOR DESEJADO: \n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(a = 0; a < tamanho; a++){
        printf("DIGITE O VALOR A SER ARMAZENADO NA POSIÇÃO %d DO VETOR; \n", a);
        scanf("%d", &vetor[a]);
    }
    int resultado = calculo(vetor, tamanho);
    printf("O RESULTADO DA SOMA E DE; %d", resultado);


return 0;
}
