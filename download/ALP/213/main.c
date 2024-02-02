#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana. O cálculo da distância deve ser realizado
através de um subprograma, que deve receber como entrada os valores das
coordenadas x e y dos dois pontos.
*/

float CalculoDistancia(float x,float y,float p,float q){
    return sqrt(pow(x-p,2)+pow(y-q,2));
}

void main()
{
    float x,y,p,q;
    printf("Digite o valor de X & Y: ");
    scanf("%f %f", &x,&y);

    printf("Digite os valores de P &Q: ");
    scanf("%f %f", &p,&q);

    float distancia = CalculoDistancia(x,y,p,q);
    printf("A distancia e de: %.2f", distancia);
}
