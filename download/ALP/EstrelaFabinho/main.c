#include <stdio.h>

void main(){
    int n,k,cont=0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(k=2;k<=n;k++){
        if(n%k == 0)
            cont++;
    }
    if(cont == 1){
        printf("Numero Primo");
    }
    else{
        printf("Nao e primo");
    }

}
