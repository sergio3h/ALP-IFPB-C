#include <stdio.h>
#include <stdlib.h>

int soma(int n,int k){
    if(k==1){
        return n%10;
    }
    if(k>1){
        return soma(n/10,k-1);
    }
}

void main()
{
    int n,k;
    printf("Digite N: ");
    scanf("%d",&n);

    printf("Digite K: ");
    scanf("%d",&k);

    int alg=soma(n,k);
    printf("%d algarismos",alg);
}
