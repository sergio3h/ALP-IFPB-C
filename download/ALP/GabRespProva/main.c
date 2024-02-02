#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max=10;
/*A prova é composta por dez questões objetivas, cuja resposta é uma
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o
programa deve ler o cartão de respostas de três candidatos e verificar quantas
questões cada um deles acertou. O programa deve ter pelo menos três
subprogramas: um subprograma para ler um vetor de caracteres, um
subprograma para imprimir um vetor de caracteres e outro para comparar
o cartão de respostas com o gabarito para calcular o número de acertos de
um candidato. O programa deve imprimir o gabarito, o cartão de respostas e o
número de acertos de cada candidato.
*/

void lerGabarito(char gabarito[],int max){
    if(max==0){
        return;
    }
    printf("Questao %d: ",max);
    fflush(stdin);
    scanf("%c",&gabarito[max]);
    lerGabarito(gabarito,max-1);
}

void imprimirGabarito(char gabarito[],int max){
    int k;
    for(k=1;k<max+1;k++){
        printf("\nQuestao %d:%c",k,gabarito[k]);
    }
}

int compara(char gabarito[],char resposta[],int max){
    if(max==0){
        return 0;
    }
    if(gabarito[max]==resposta[max]){
        return 1+compara(gabarito,resposta,max-1);
    }
    compara(gabarito,resposta,max-1);
}

void main()
{
    char gabarito[max],resposta[max];
    printf("Preencha o gabarito: \n");
    lerGabarito(gabarito,max);
    imprimirGabarito(gabarito,max);
    printf("\nPreencha a resposta: \n");
    lerGabarito(resposta,max);
    imprimirGabarito(resposta,max);
    int res=compara(gabarito,resposta,max);
    printf("\nCandidato acertou %d\n",res);


}
