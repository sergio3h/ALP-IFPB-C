#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Escreva um subprograma recursivo que receba como entrada um string contendo a
sequ�ncia de resultados de um time e calcule a sua pontua��o, considerando que V
representa vit�ria e vale 3 pontos, E representa empate e vale um ponto e D
representa derrota e n�o vale qualquer ponto. Por exemplo, se a entrada do
programa for VVVEEDDVED, a pontua��o do time � 15.*/
int sequencia(char seq[],int tamanho){
    if(tamanho<1){
        return sequencia(seq,tamanho);
    }
    if(seq[tamanho]=='V'){
        return 3+ sequencia(seq,tamanho-1);
    }
    if(seq[tamanho]=='E'){
        return 1+sequencia(seq,tamanho-1);
    }
    sequencia(seq,tamanho-1);
}

void main()
{
    char seq[20];
    int tamanho;
    printf("Digite a sequencia: ");
    fflush(stdin);
    gets(seq);
    tamanho=strlen(seq);
    int som = sequencia(seq,tamanho);
    printf("%d",som);
}
