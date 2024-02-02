#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int numero;
  struct nodo *proximo;
} Nodo;

typedef struct {
  Nodo *topo;
} Pilha;

int somaPilha(Pilha *pilha) {
  int soma = 0;
  Nodo *aux = pilha->topo;
  while (aux != NULL) {
    soma += aux->numero;
    aux = aux->proximo;
  }
  return soma;
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


  int soma = somaPilha(pilha);
  printf("A soma foi de %d\n", soma);

  return 0;
}
