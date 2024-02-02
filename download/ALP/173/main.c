#include <stdio.h>
#include <stdlib.h>
const int max =10;
void main()
{
    int vet[max];
    int k,n,cont =0,pa=0;
    for(k=0;k<max;k++){
        printf("Digite %d numeros: ",max-k);
        scanf("%d", &vet[k]);
    }
    printf("Digite um valor N: ");
    scanf("%d", &n);

    for(k=0;k<max;k++){
        if(vet[k]%n==0 && vet[k+1]%n==0){
            cont++;
            if(cont>2){
                pa++;
            }
        }
    }
    printf("Possui %d progressao aritmeticas", pa);
}
