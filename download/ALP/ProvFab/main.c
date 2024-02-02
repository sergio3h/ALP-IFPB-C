#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int max=10;
void main()
{
    char vet[max];
    int k,i,cont=0;
    for(k=0;k<max;k++){
        printf("Preencha o vetor com %d letras: \n",max-k);
        fflush(stdin);
        scanf("%c", &vet[k]);
    }

    for(i=0;i<max/2;i++){
        if(vet[i]==vet[max-1-i]){
            cont++;
        }
    }
    if(cont==5){
        printf("O vetor e palindromo");
    }
    else{
        printf("O vetor nao e palindromo");
    }
}
