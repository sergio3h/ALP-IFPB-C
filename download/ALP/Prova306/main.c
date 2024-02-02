#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma em C que receba como parâmtros dois vetores vetaA e vetB
de 50 números inteiros e um vetor vetC de 100 números inteiros e preencha o terceiro
vetor intercalando (seguindo estritamente a ordem dos valores nos dois vetores), em
cada posição, um valor do vetor vetA e um valor do vetor vetB. Por exemplo, se os dois
vetores tivessem apenas cinco números e tivessem, respectivamente, os valores {2, 4,
8, 10, 15} e {1, 5, 7, 9, 13}, o terceiro vetor seria {2, 1, 4, 5, 8, 7, 10, 9, 15, 13}*/

const int tamanho = 5;

void lerVet(int vet[],int tamanho){
    int k;
    for(k=0;k<tamanho;k++){
        printf("Digite a posisao %d do Vetor: ",k+1);
        scanf("%d",&vet[k]);
    }
}

void lerVetC(int veta[],int vetb[],int vetc[],int tamanho,int indice){
    if(indice < tamanho * 2){
        if(indice%2==0){
            vetc[indice]=veta[indice/2];
        }
        else{
            vetc[indice]=vetb[indice/2];
        }
        lerVetC(veta,vetb,vetc,tamanho,indice+1);
    }

}

void imprimirVetC(int vetc[tamanho*2]){
    int k;
    for(k=0;k<tamanho*2;k++){
        printf("%d\n",vetc[k]);
    }
}

void main()
{
    int veta[tamanho],vetb[tamanho],vetc[tamanho * 2];
    lerVet(veta,tamanho);
    lerVet(vetb,tamanho);
    lerVetC(veta,vetb,vetc,tamanho,0);
    imprimirVetC(vetc);
}
