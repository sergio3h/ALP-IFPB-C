#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fatorial(n-1);
}

void main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    int fat = fatorial(n);
    printf("O fatorial eh %d",fat);
}
