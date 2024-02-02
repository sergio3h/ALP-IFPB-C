#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma em C que receba como parâmtros dois vetores vetaA e vetB
de 50 números inteiros e um vetor vetC de 100 números inteiros e preencha o terceiro
vetor intercalando (seguindo estritamente a ordem dos valores nos dois vetores), em
cada posição, um valor do vetor vetA e um valor do vetor vetB. Por exemplo, se os dois
vetores tivessem apenas cinco números e tivessem, respectivamente, os valores {2, 4,
8, 10, 15} e {1, 5, 7, 9, 13}, o terceiro vetor seria {2, 1, 4, 5, 8, 7, 10, 9, 15, 13}*/

void estrela(int n){
    int k;
    if(n>0){
    estrela(n-1);
        for(k=0;k<n;k++){
            printf("*");
        }
    }
    printf("\n");
}

void main()
{
    int n;
    printf("N: ");
    scanf("%d",&n);
    estrela(n);
}
