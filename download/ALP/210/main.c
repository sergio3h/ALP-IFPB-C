#include <stdio.h>
#include <stdlib.h>
/*0. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através
de um subprograma, que deve receber como entrada o comprimento e a largura do
terreno*/
const float metro = 50.00;

float metroQ(float comp, float larg){
    return (comp * larg) * metro;
}

void main()
{
    float comp, larg;
    printf("Digite o comprimento e a largura do terreno: ");
    scanf("%f %f", &comp, &larg);

    float mQuadrado = metroQ(comp,larg);

    printf("O valor da casa eh %.2f", mQuadrado);
}
