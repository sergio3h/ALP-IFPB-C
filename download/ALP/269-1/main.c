#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum
número primo a partir da posição N do vetor*/

const int max=10;
int primo(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int posicao(int vet[],int max,int n){
    if(n>=max){
        return 0;
    }
    if(primo(vet[n])){
        return 1;
    }
    return posicao(vet,max,n+1);
}

void main()
{
    int vet[max],n,k;
    for(k=0;k<max;k++){
        printf("Digite o valor de vet posicao %d: ",k+1);
        scanf("%d",&vet[k]);
    }
    printf("Valor de N: ");
    scanf("%d",&n);
    if(n>=1 &&n<=10){
        if(posicao(vet,max,n-1)){
            printf("Existe primo");
        }
        else{
            printf("Não existe primo");
        }
    }
    else{
        printf("Numero invalido");
    }

}
