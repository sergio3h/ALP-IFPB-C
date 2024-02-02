#include <stdio.h>
#include <stdlib.h>
int const quantidade=10;
int main()
{
    int vet[quantidade];
    int k;
    for(k=0;k<quantidade;k++){
        printf("Digite 10 numeros");
        scanf("%d", &vet[k]);
    }
    for(k=0;k<quantidade;k++){
        printf("%d \n", vet[k]);
    }
}
