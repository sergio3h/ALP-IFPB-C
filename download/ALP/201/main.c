#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.
*/
int dobro(int n){
    return n * n;
}

int triplo(int n){
    return n * n * n;
}

int quadrado(int n){
    return pow(n,2);
}

int cubo(int n){
    return pow(n,3);
}

int raiz(int n){
    return sqrt(n);
}

void main()
{
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    int valDobro = dobro(n);
    int valTriplo = triplo(n);
    int valQuadrado = quadrado(n);
    int valCubo = cubo(n);
    int valRaiz = raiz(n);

    printf("O dobro e %d\nO triplo e %d\nO quadrado e %d\nO cubo e %d\nA raiz e %d", valDobro,valTriplo,valQuadrado,valCubo,valRaiz);

}
