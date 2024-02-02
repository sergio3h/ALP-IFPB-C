#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, cont = 0;
    printf("Digite um numero para saber se e perfeito");
    scanf("%d", &n);
    for(k=1;k<n;k++){
        if(n%k==0){
            cont = cont+k;
        }
    }
    if(cont == n){
        printf("E perfeito");
    }
    else{
        printf("Nao e perfeito");
    }
    return 0;
}
