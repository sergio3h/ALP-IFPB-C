#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um vetor de 10 n�meros inteiros e dois n�meros
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posi��es M e N do
vetor. O programa deve tamb�m imprimir o estado do vetor antes e ap�s a invers�o.
*/
const int max=10;
int main()
{
    int vet[max];
    int m,n,k,aux,aux2;
    for(k=0;k<max;k++){
        printf("Digite %d numeros: ",max-k);
        scanf("%d", &vet[k]);
    }
    printf("Digite o valor de M e N: ");
    scanf("%d %d", &m, &n);

    printf("Antes da inversao: ");

    for(k=0;k<max;k++){
        printf("%d \n", vet[k]);
    }

    aux = vet[m-1];
    aux2= vet[n-1];
    vet[n-1]= aux;
    vet[m-1]=aux2;

    printf("Depois da inversao: ");

    for(k=0;k<max;k++){
        printf("%d \n", vet[k]);
    }
    return 0;
}
