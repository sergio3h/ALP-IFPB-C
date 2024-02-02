#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int resultado(char VDE[],int tamanho){
    if(tamanho==0){
        return 0;
    }
    int pontuacao =0;

    if(VDE[0]=='V'){
        pontuacao = 3;
    }
    if(VDE[0]=='E'){
        pontuacao = 1;
    }
    return pontuacao + resultado(VDE+1,tamanho-1);

}

void main()
{
    char VDE[50];
    printf("Digite V para vitoria,E p empata, e D para derrota: ");
    fflush(stdin);
    gets(VDE);
    int tamanho=strlen(VDE);
    int ponto = resultado(VDE,tamanho);
    printf("%d",ponto);

}
