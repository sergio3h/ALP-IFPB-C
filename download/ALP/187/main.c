#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N e determine a quantidade de números pares
existente na linha N.*/
const int ordem=5;
void main()
{
    int mat[ordem][ordem];
    int k,j,n,cont=0;

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Preencha a matriz com %d linhas e %d colunas: ",ordem-k,ordem-j);
            scanf("%d", &mat[k][j]);
        }
    }
    printf("Digite o valor de N(entre 1 e 5): ");
    scanf("%d", &n);

    for(j=0;j<ordem;j++){
        if(mat[n-1][j]%2==0){
            cont++;
        }
    }
    printf("A linha %d possui %d numeros pares", n,cont);
}
