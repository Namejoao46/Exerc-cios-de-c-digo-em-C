/*Crie um algoritmo que leia 2 notas e calcule a média entre elas.
Após isso mostre o valor absoluto da diferença entre elas*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota1, nota2;

    //Primeira nota
    printf("DIGITE A PRIMEIRA NOTA;  ");
    scanf("%f", & nota1);

    //Segunda nota
    printf("DIGITE A SEGUNDA NOTA;  ");
    scanf("%f", &nota2);

    //O abs impede que o valor saia negativo
    float media = abs(nota1 - nota2) / 2 ;

    printf("\n A media das notas e = %f", media);
}
