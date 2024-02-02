#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int numero;
    struct nodo * proximo;
}Nodo;

typedef struct{
    Nodo * inicio;
}Fila;

Fila * criarFila(){
    Fila*fila = (Fila*)malloc(sizeof(fila));
    fila -> inicio = NULL;
    return fila;
}

void inserir(Fila * fila,int n){
    Nodo*novo=(Nodo*)malloc(sizeof(Nodo));
    novo -> numero = n;
    novo ->proximo = NULL;
    if(fila ->inicio == NULL){
        fila ->inicio = novo;
    }
    else{
        Nodo * aux = fila ->inicio;
        while(aux->proximo != NULL){
            aux = aux -> proximo;
        }
        aux -> proximo = novo;
    }
}

int remover(Fila * fila){
    Nodo * aux = fila ->inicio;
    int resultado = aux -> numero;
    fila -> inicio = aux ->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Fila * fila){
    if(fila -> inicio == NULL){
        return 1;
    }
    return 0;
}

void main()
{
    Fila * fila = criarFila();
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d",&n);
    while(n!=0){
        inserir (fila,n);
        printf("Informe outro numero: ");
        scanf("%d",&n);
    }
    printf("Os numeros informados foram: \n");
    while(estaVazia(fila)==0){
        n = remover(fila);
        printf("%d \n",n);
    }
}
