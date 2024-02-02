#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*. Escreva um subprograma recursivo que receba como entrada um string contendo a
sequ�ncia de resultados de um time e calcule a sua pontua��o, considerando que V
representa vit�ria e vale 3 pontos, E representa empate e vale um ponto e D
representa derrota e n�o vale qualquer ponto. Por exemplo, se a entrada do
programa for VVVEEDDVED, a pontua��o do time � 15*/
int sequencia(char sequen[],int tamanho){
    if(tamanho == 0){
        return 0;
    }
    int pontuacao =0;
    if(sequen[0]=='V'){
        pontuacao =3;
    }
    if(sequen[0]=='E'){
        pontuacao = 1;
    }
    return pontuacao + sequencia(sequen+1,tamanho-1);
}

void main()
{
    char sequen[20];
    printf("Digite a sequencia: ");
    fflush(stdin);
    gets(sequen);
    int tamanho=strlen(sequen);
    int seq=sequencia(sequen,tamanho);
    printf("%d",seq);


}
