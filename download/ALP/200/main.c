#include <stdio.h>
/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e
o seu per�metro. O programa deve ter um subprograma para calcular a �rea e outro
para calcular o per�metro.
*/
float area(float lado){
    return lado*lado;
}

float perimetro(float lado){
    return lado * 4;
}

void main(){
    float lado;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float valArea = area(lado);

    float valPerimetro = perimetro(lado);

    printf("A area eh %.2f e o perimetro %.2f",valArea, valPerimetro);
}
