#include <stdio.h>

const int tamanho =10;

int somaVetor(int vet[tamanho],int n){
    if(n==tamanho-1){
        return vet[n];
    }
    return vet[n]+somaVetor(vet,n+1);
}

void main()
{
    int n,k,vet[tamanho];
    for(k=0;k<tamanho;k++){
        printf("Informe um numero inserido: ");
        scanf("%d", &vet[k]);
    }
    printf("Informe a posicao a partir de que a soma deve iniciar: ");
    scanf("%d", &n);
    int soma = somaVetor(vet,n-1);
    for(k=0;k<tamanho;k++){
        printf("%d ", vet[k]);
    }
    printf("\nA soma eh %d", soma);

}
