#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a dist�ncia entre estes dois pontos. A dist�ncia entre dois pontos pode ser
determinada atrav�s da dist�ncia euclidiana. O c�lculo da dist�ncia deve ser realizado
atrav�s de um subprograma, que deve receber como entrada os valores das
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
