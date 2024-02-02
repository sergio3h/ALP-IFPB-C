#include <stdio.h>
/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e
o seu perímetro. O programa deve ter um subprograma para calcular a área e outro
para calcular o perímetro.
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
