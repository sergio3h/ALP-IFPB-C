#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros. O programa deve ter um subprograma para converter para
cada unidade de medida*/

float quilometro(float metro){
    return metro / 1000;
}
float hectometro(float metro){
    return metro / 100;
}

float decametro(float metro){
    return metro / 10;
}

float centimetro(float metro){
    return metro * 100;
}

float decimetro(float metro){
    return metro * 10;
}

float milimetro(float metro){
    return metro * 1000;
}

void main()
{
    float metro;
    printf("Digite o valor de Metros: ");
    scanf("%f", &metro);

    float km = quilometro(metro);
    printf("%f KM\n",km);

    float hm = hectometro(metro);
    printf("%f HM\n",hm);

    float dm = decametro(metro);
    printf("%f DM\n",dm);

    float cm = centimetro(metro);
    printf("%f cm\n",cm);

    float decm = decimetro(metro);
    printf("%f decm\n",decm);

    float mm = milimetro(metro);
    printf("%f mm\n",mm);
}
