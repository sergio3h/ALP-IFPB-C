#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/

float kelvin(float celsius){
    return celsius + 273;
}

float fahrenheit(float celsius){
    return celsius * 1.8 + 32;
}
void main()
{
    int k;
    float celsius;
    for(k=1;k<=5;k++){
        printf("Digite o valor da temperatura em Celsiu: \n");
        scanf("%f", &celsius);

        float valFahrenheit = fahrenheit(celsius);
        float valKelvin = kelvin(celsius);

        printf("O valor em Fahrenheit e %.2f e em Kelvin e %.2f \n", valFahrenheit, valKelvin);
    }
}
