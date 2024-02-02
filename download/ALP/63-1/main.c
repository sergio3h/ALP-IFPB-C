#include <stdio.h>
#include <stdlib.h>

void saldo(int casa,int fora){
    if(casa>fora){
        printf("Casa ganhou!");
    }
    if(casa==fora){
        printf("Empate");
    }
    else if(fora>casa){
        printf("Fora ganhou");
    }
}

void main()
{
    int casa,fora;
    printf("Quantos gols a casa fez?: ");
    scanf("%d",&casa);

    printf("Quantos gols fora fez?: ");
    scanf("%d",&fora);
    saldo(casa,fora);
}
