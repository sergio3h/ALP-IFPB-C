#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros
e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz. */
const int ordem=5;
void main()
{
    int mat[ordem][ordem];
    int n,k,j,cont=0;

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Preencha a matriz com %d linhas e %d colunas: ", ordem-k,ordem-j);
            scanf("%d", &mat[k][j]);
        }
    }
    printf("Digite um valor N: ");
    scanf("%d", &n);

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(mat[k][j]==n){
                cont++;
            }
        }
    }
    printf("O numero %d apareceu na matriz %d vezes",n,cont);
}
