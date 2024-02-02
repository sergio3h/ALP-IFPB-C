#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int max=10;

void lerGabarito(char gabarito[],int max){
  if(max<0){
    return;
  }
  if(max>=0 && max<=10){
    printf("Questão %d: ",max);
    fflush(stdin);
    scanf("%c", &gabarito[max-1]);
  }
  lerGabarito(gabarito,max-1);
}

void imprimirGabarito(char gabarito[],int max){
  printf("Gabarito:\n");
  for(int i=0;i<max;i++){
    printf("Questão %d: %c\n",i+1,gabarito[i]);
  }
}

void comparar(char gabarito[],char resposta[],int max){
  int cont=0;
  for(int i=0;i<max;i++){
    if(gabarito[i]==resposta[i]){
      cont++;
    }
  }
  printf("Número de acertos: %d\n",cont);
}

int main()
{
  char gabarito[max],resposta[max];

  printf("Preencha o gabarito:\n");
  lerGabarito(gabarito,max);
  imprimirGabarito(gabarito,max);

  for(int i=0;i<3;i++){
    printf("Preencha o cartão de respostas do candidato %d:\n",i+1);
    lerGabarito(resposta,max);
    comparar(gabarito,resposta,max);
  }
  return 0;
}
