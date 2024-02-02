#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma em C que receba como parâmtros dois vetores vetaA e vetB
de 50 números inteiros e um vetor vetC de 100 números inteiros e preencha o terceiro
vetor intercalando (seguindo estritamente a ordem dos valores nos dois vetores), em
cada posição, um valor do vetor vetA e um valor do vetor vetB. Por exemplo, se os dois
vetores tivessem apenas cinco números e tivessem, respectivamente, os valores {2, 4,
8, 10, 15} e {1, 5, 7, 9, 13}, o terceiro vetor seria {2, 1, 4, 5, 8, 7, 10, 9, 15, 13}*/

const int max= 5;

void lerImprimirVet(int vet[],int max){
    int k;
    for(k=0;k<max;k++){
        printf("Digite a posicao %d do vetor: ",k+1);
        scanf("%d",&vet[k]);
    }
    printf("\nVetor: \n");
    for(k=0;k<max;k++){
        printf("%d ",vet[k]);
    }
    printf("\n");
}

void vetC(int veta[],int vetb[],int vetc[max*2],int max){
    for(int indice=0;indice<max*2;indice++){
        if(indice%2==0){
            vetc[indice]=veta[indice/2];
        }
        if(indice%2!=0){
            vetc[indice]=vetb[indice/2];
        }
    }
}

void main()
{
    int veta[max],vetb[max],vetc[max*2];
    lerImprimirVet(veta,max);
    lerImprimirVet(vetb,max);
    vetC(veta,vetb,vetc,max);
    int k;
    printf("\nVet C: \n");
    for(k=0;k<max*2;k++){
        printf("%d ",vetc[k]);
    }

}
