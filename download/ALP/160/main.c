#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.*/
const int max=10;
int main()
{
    int k, aux;
    int vet[max];
    for(k=0;k<max;k++){
        printf("Digite %d numeros: ",max-k);
        scanf("%d", &vet[k]);
    }
    printf("Normal: \n");
    for(k=0;k<max;k++){
        printf("%d \n", vet[k]);
    }

    printf("Invertido: \n");
    for(k=0;k<max/2;k++){
        aux = vet[max-1-k];
        vet[max-1-k]=vet[k];
        vet[k]= aux;
    }
    for(k=0;k<max;k++){
        printf("%d \n", vet[k]);
    }
    return 0;
}
