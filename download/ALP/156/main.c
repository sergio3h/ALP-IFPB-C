#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
leitura, leia um n�mero inteiro N e imprima todos os elementos do vetor que s�o
maiores que N*/
int const max=10;
int main()
{
    int vet[max];
    int k,n;
    for(k=0;k<max;k++){
        printf("Digite um numero de %d a %d: ",k+1,max);
        scanf("%d", &vet[k]);
    }
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(k=0;k<max;k++){
        if(vet[k]>n){
            printf("%d \n", vet[k]);
        }
    }
    return 0;
}
