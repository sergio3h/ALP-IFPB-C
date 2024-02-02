#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int numero;
    struct nodo * proximo;
}Nodo;

typedef struct{
    Nodo*topo;
}Pilha;

const int TRUE = 1;
const int FALSE = 0;

Pilha*criarPilha(){
    Pilha*pilha=(Pilha*)malloc(sizeof(Pilha));
    pilha->topo=NULL;
    return pilha;
}

void push(Pilha*pilha,int n){
    Nodo*novo=(Nodo*)malloc(sizeof(Nodo));
    novo->numero=n;
    novo->proximo=pilha->topo;
    pilha->topo=novo;
}

int pop(Pilha*pilha){
    Nodo*aux=pilha->topo;
    int resultado=aux->numero;
    pilha->topo=aux->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Pilha*pilha){
    if(pilha->topo==NULL){
        return TRUE;
    }
    return FALSE;
}

int binario(int n){
    Pilha * pilha = criarPilha();

    while(n>0){
        push(pilha,n%2);
        n/2;
    }
    int binario =0;
    while(!estaVazia(pilha)){
        binario = binario * 10 + pop(pilha);
    }
    return binario;
}

void main()
{
    Pilha*pilha=criarPilha();
    int n;
    printf("Informe o numero: ");
    scanf("%d",&n);
    /*while(n!=0){
        push(pilha,n);
        printf("Informe outro numero: ");
        scanf("%d",&n);
    }*/
    printf("\nOs numeros informados foram\n");
    printf("%d em binario e %d",n,binario(n));

}
