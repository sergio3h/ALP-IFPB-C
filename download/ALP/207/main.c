#include <stdio.h>
#include <stdlib.h>
float centimetro(float polegadas){
    return polegadas * 2.54;
}

void main()
{
    float polegadas;
    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegadas);

    float cm = centimetro(polegadas);

    printf("O valor em centimetros eh %.2f", cm);
}
