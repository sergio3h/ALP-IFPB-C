#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o n�mero total de quest�es existentes em uma prova
e o n�mero de quest�es que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros. O c�lculo deve ser realizado atrav�s de um
subprograma.*/
float acertos(float quest, float acerts){
    return 100.00 * acerts / quest;
}

void main()
{
    int quest,acerts;
    printf("Escreva quantas questoes tem a prova: ");
    scanf("%d", &quest);
    printf("Quantas questoes certas: ");
    scanf("%d", &acerts);

    float per100acertos=acertos(quest,acerts);
    float erros = 100.00 - per100acertos;

    printf("Percentual de acertos: %.2f porcento\nPercentual de erros: %.2f porcento", per100acertos,erros);

}
