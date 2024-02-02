#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume. O cálculo deve ser realizado através de um subprograma*/
float volume(float raio){
    return 4 * M_PI * pow(raio,3)/3;
}

void main()
{
    float raio;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    float vol=volume(raio);

    printf("O volume da esfera eh: %f", vol);
}
