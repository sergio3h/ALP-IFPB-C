#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule o valor da soma dos elementos de cada uma de suas linhas. */
const int ordem=5;
void main()
{
    int mat[ordem][ordem];
    int k,j,soma=0;
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Preencha a matriz com %d linha e %d colunas: ", ordem-k,ordem-j);
            scanf("%d", &mat[k][j]);
        }
    }
    for(k=0;k<ordem;k++){
        soma=0;
        for(j=0;j<ordem;j++){
            soma = soma + mat[k][j];
        }
        printf("A soma das linha %d e %d", k+1,soma);
    }

}
