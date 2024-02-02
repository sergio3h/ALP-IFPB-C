#include <stdio.h>

/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor.*/
const int max=10;
int main()
{
    int vet[max];
    int k,soma=0;
    for(k=0;k<max;k++){
        printf("Digite 10 numeros: ");
        scanf("%d", &vet[k]);
        soma = soma + vet[k];
    }
    float media = (float)soma/max;
    for(k=0;k<max;k++){
        if(vet[k]>media){
            printf("%d \n", vet[k]);
        }
    }
    return 0;
}
