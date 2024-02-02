#include <stdio.h>
#include <string.h>
const int questoes=10;
void main()
{
    char gabarito[questoes], resposta[questoes];
    int k,j,i,acerto=0;
    printf("Preencha o gabarito: \n");
    for(k=0;k<questoes;k++){
        printf("Questao %d: \n",k+1);
        fflush(stdin);
        scanf("%c", &gabarito[k]);
    }
    printf("Preencha as respostas:\n");
    for(j=0;j<questoes;j++){
        printf("Questao %d: \n",j+1);
        fflush(stdin);
        scanf("%c", &resposta[j]);
    }
    for(i=0;i<questoes;i++){
        if(gabarito[i]==resposta[i]){
            acerto++;
        }
    }
    printf("A qutns de acertos foi %d ", acerto);
}
