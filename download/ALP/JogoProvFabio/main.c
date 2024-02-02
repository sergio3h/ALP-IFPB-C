#include <stdio.h>

void main(){
    int ordem;
    printf("Digite a ordem do tabuleiro: ");
    scanf("%d", &ordem);
    int tabuleiro[ordem][ordem];
    int k,j;
    int peca=1;

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            tabuleiro[k][j]=peca;
            peca *=2;
        }
    }
    printf("A quantidade de graos em cada posicao eh:\n");

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("%d",tabuleiro[k][j]);
        }
        printf("\n");
    }
}
