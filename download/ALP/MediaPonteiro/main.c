#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int numero;
  struct nodo *proximo;
} Nodo;

typedef struct {
  Nodo *topo;
} Pilha;

int mediaPilha(Pilha *pilha) {
  int soma = 0;
  int cont=0;
  Nodo *aux = pilha->topo;
  while (aux != NULL) {
    soma += aux->numero;
    cont++;
    aux = aux->proximo;
  }
  return soma/cont;
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
  printf("Informe o n�mero: ");
  scanf("%d", &n);
  while (n != 0) {
    push(pilha, n);
    printf("Informe outro n�mero: ");
    scanf("%d", &n);
  }


  int media = mediaPilha(pilha);
  printf("A media foi de %d\n", media);

  return 0;
}
