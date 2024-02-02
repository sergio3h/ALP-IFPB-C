#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma.
*/
float area(float base, float altura){
    return (base * altura) /2;
}

void main()
{
    float altura, base;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float valArea = area(base,altura);

    printf("A area eh %.2f", valArea);

}
