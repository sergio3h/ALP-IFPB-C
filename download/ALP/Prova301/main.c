#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int QUESTOES = 10;
const int CANDIDATO =3;

void lerGabarito(char gabarito[],int QUESTOES){
    int k;
    for(k=0;k<QUESTOES;k++){
        printf("Digite o gabarito da questao %d: ",k+1);
        fflush(stdin);
        scanf("%c", &gabarito[k]);
    }
}

void lerResposta(char resposta[],int QUESTOES){
    int k;
    for(k=0;k<QUESTOES;k++){
        printf("Digite a resposta da questao %d: ",k+1);
        fflush(stdin);
        scanf("%c", &resposta[k]);
    }
}

void imprimirGarito(char gabarito[],int QUESTOES){
    int k;
    printf("Gabarito eh: \n");
    for(k=0;k<QUESTOES;k++){
        printf("Questao %d: %c\n",k+1,gabarito[k]);
    }
}

void imprimirResposta(char resposta[],int QUESTOES){
    int k;
    printf("Cartão de respostas eh: \n");
    for(k=0;k<QUESTOES;k++){
        printf("Questao %d: %c\n",k+1,resposta[k]);
    }
}

void comparador(char gabarito[],char resposta[],int QUESTOES){
    int k,cont =0;
    for(k=0;k<QUESTOES;k++){
        if(gabarito[k]==resposta[k]){
            cont++;
        }
    }
    printf("O candidato acertou %d questoes",cont);
}


void main()
{
    char gabarito[QUESTOES],resposta[QUESTOES];
    int k;
    lerGabarito(gabarito,QUESTOES);
    for(k=0;k<3;k++){
        lerResposta(resposta,QUESTOES);
        imprimirGarito(gabarito,QUESTOES);
        imprimirResposta(resposta,QUESTOES);
        comparador(gabarito,resposta,QUESTOES);
    }
}
