#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia o valor dos dois catetos de um tri�ngulo ret�ngulo e
calcule o valor da hipotenusa. O c�lculo deve ser realizado atrav�s de um
subprograma.*/

float hipotenusa(float cat1,float cat2){
    return sqrt((cat1 * cat1) + (cat2 * cat2));
}
void  main()
{
    float cat1, cat2;
    printf("Digite o valor de dois catetos: ");
    scanf("%f %f", &cat1, &cat2);

    float hipo = hipotenusa(cat1,cat2);

    printf("A hipotenusa e: %f", hipo);
}
