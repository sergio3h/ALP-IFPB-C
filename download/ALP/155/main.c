#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário. */
const int max=10;
int main()
{
    int vet[max];
    int k,e;
    for(k=0;k<max;k++){
        printf("Digite um numero: ");
        scanf("%d", &vet[k]);
    }
    printf("Digite um numero de 1 a %d: ",max);
    scanf("%d",&e);

    printf("Seu numero foi %d", vet[e-1]);

    return 0;
}
