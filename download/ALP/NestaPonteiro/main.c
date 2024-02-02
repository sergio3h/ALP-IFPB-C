#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int numero;
  struct nodo *proximo;
} Nodo;

typedef struct {
  Nodo *topo;
} Pilha;

int estaPilha(Pilha *pilha,int j) {
  Nodo *aux = pilha->topo;
  while (aux != NULL) {
    if(j == aux ->numero){
        return 1;
    }
    aux = aux->proximo;
  }
  return 0;
}
Pilha *criarPilha() {
  Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
  pilha->topo = NULL;
  return pilha;
}

void push(Pilha *pilha, int n) {
  Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
  novo->numero = n;
  novo->proximo = pilha->topo;
  pilha->topo = novo;
}

int main() {
  Pilha *pilha = criarPilha();
  int n;
  printf("Informe o número: ");
  scanf("%d", &n);
  while (n != 0) {
    push(pilha, n);
    printf("Informe outro número: ");
    scanf("%d", &n);
  }
  int j;
  printf("Digite J: ");
  scanf("%d",&j);


  int esta = estaPilha(pilha,j);
  if(esta ==1){
    printf("N esta na pilha");
  }
  else{
    printf("N nao esta na pilha");
  }

  return 0;
}
