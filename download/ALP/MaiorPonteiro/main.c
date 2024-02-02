#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int numero;
  struct nodo *proximo;
} Nodo;

typedef struct {
  Nodo *topo;
} Pilha;

int maiorPilha(Pilha *pilha) {
    int maior;
  Nodo *aux = pilha->topo;
  maior = aux ->numero;
  while (aux != NULL) {
    if(maior < aux->numero){
        maior = aux->numero;
    }
    aux = aux->proximo;

  }
  return maior;
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


  int maior = maiorPilha(pilha);
  printf("O maior foi de %d\n", maior);

  return 0;
}
