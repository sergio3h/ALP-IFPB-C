#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o valor de uma dist�ncia percorrida em km e o tempo
gasto em horas e calcule a velocidade m�dia em m/s. A convers�o deve ser realizada
atrav�s de um subprograma.
*/
float velMedia (float km,float hr){
    return (km/hr)/3.6;
}

void main()
{
    float km,hr;
    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &km);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &hr);

    float vMedia = velMedia(km,hr);

    printf("A velocidade em M/S: %.2f ", vMedia);
}
