/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
sua diagonal principal*/

#include <stdio.h>

const int ordem=5;
void main(){
    int k,j,mat[ordem][ordem],n;
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Escreva numeros inteiros para completar a matriz: ");
            scanf("%d", &mat[k][j]);
        }
    }
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Elementos abaixo e N primeiros: \n");
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(k==j && k<n && j<n){
                printf("%d ", mat[k][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
