/*FAÇA UM PROGRAMA QUE JOGA 3 DADOS (DE SEIS LADOS) ALEATÓRIOS
E EXIBE O RESULTADO DA SOMA DOS 3 VALORES GERADOS NA TELA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //USA O TEMPO ATUAL COMO SEMENTE
    srand(time(NULL));

    //INSERINDO AS VARIAVEIS
    int minimo = 0;
    int maximo = 6;

    //GERANDO NUMEROS
    int r1 = (rand () % (maximo - minimo + 1)+ minimo);
    int r2 = (rand () % (maximo - minimo + 1)+ minimo);
    int r3 = (rand () % (maximo - minimo + 1)+ minimo);
    int soma = r1 + r2 +r3;

    //IMPRIMINDO NA TELA
    printf("PRIMEIRO NUMERO GERADO: %d \n", r1);
    printf("SEGUNDO NUMERO GERADO: %d \n", r2);
    printf("TERCEIRO NUMERO GERADO: %d \n", r3);
    printf("O VALOR DA SOMA DOS TRES NUMEROS GERADOS E DE: %d \n", soma);

    return 0;
}
