#include <stdio.h>
#include <string.h>

const int prova=10;
void main(){
    char gabarito[prova], resposta[prova];
    int k,i,cont=0,acerto=0,aluno=0,soma=0;
    char nome[50];

    for(k=0;k<prova;k++){
        printf("Gabarito da questao %d: ", k+1);
        fflush(stdin);
        scanf("%c",&gabarito[k]);
    }
    while(strcmp(nome,"fim")!=0){
        printf("Digite seu nome(fim para encerrar): ");
        fflush(stdin);
        gets(nome);

        if(strcmp(nome,"fim")==0){
            break;
        }

        aluno++;
        for(k=0;k<prova;k++){
            printf("Digite a resposta da questao %d \n: ",k+1);
            fflush(stdin);
            scanf("%c", &resposta[k]);
        }

        for(i=0;i<prova;i++){
            if(gabarito[i]==resposta[i]){
                acerto++;
            }
        }
        printf("O percentual de acertos eh %d procento \n",acerto*10);
        soma = soma + acerto;
        acerto=0;
    }
    float media=(float)soma*10.00/aluno;
    printf("A media de acertos foi %.2f",media);

}
