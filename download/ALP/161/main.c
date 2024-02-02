#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int max =20;
int main()
{
    char vet[max];
    int k, cont=0;
    for(k=0;k<max;k++){
        printf("Digite %d caractere: ",max-k);
        fflush(stdin);
        scanf("%c", &vet[k]);
    }

    for(k=0;k<max/2;k++){
        if(vet[k] == vet[max-k-1]){
            cont++;
        }
    }
    if(cont == 10){
        printf("E palindromo");
    }
    else{
        printf("Nao e palindromo");
    }
    return 0;
}
