/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos que estão acima e abaixo da diagonal principal.*/

#include <stdio.h>

const int ordem=5;
void main(){
    int k,j,mat[ordem][ordem];
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Escreva numeros inteiros para completar a matriz: ");
            scanf("%d", &mat[k][j]);
        }
    }
    printf("Elementos abaixo e acima da diagonal principal: \n");
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(k<j || k>j){
                printf("%d ", mat[k][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
