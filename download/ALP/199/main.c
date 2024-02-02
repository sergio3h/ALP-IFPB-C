#include <stdio.h>
#include <math.h>
/*Escreva um programa que leia três números inteiros e calcule a sua média aritmética.
O cálculo da média deve ser realizado através de um subprograma
*/
float media(int n1, int n2, int n3){
    return (n1+n2+n3)/3.0;
}

void main(){
    int n1,n2,n3;
    printf("Digite um tres numeros inteiros: ");
    scanf("%d %d %d", &n1,&n2,&n3);

    float valMedia = media(n1, n2, n3);

    printf("A media eh %.2f",valMedia);
}
