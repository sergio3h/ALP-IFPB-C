#include <stdio.h>
#include <stdlib.h>

float imc(float peso,float altura){
    return peso / (altura*altura);
}

void main()
{
    float peso,altura;
    printf("Digite seu peso em KG: ");
    scanf("%f",&peso);
    printf("Digite sua altura em Metros: ");
    scanf("%f", &altura);

    float CalculoIMC=imc(peso,altura);
    printf("O imc e de %.2f",CalculoIMC);
}
