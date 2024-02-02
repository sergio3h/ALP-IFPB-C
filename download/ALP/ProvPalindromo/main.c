#include <stdio.h>
#include <string.h>
const int max=10;
void main()
{
    char vet[max];
    int k,j,cont=0;
    for(k=0;k<max;k++){
        printf("Preencha o vetor com %d numeros: ", max-k);
        fflush(stdin);
        scanf("%c", &vet[k]);
    }

    for(j=0;j<max/2;j++){
        if(vet[j]==vet[max-1-j]){
            cont++;
        }
    }
    if(cont==5){
        printf("O vetor e um palindromo");
    }
    else{
        printf("O vetor nao e um palindromo");
    }
}
