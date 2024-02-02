/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é
nula.*/

#include <stdio.h>

const int ordem=3;
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

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(mat[k][j]==n+1 && mat[k] == 0){
                printf("Matriz nula");
            }
            else{
                printf("Nao nula");
            }
        }
    }


    }

