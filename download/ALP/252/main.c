#include <stdio.h>
#include <stdlib.h>

int soma(int m,int n){
    if(m==n){
        return m;
    }
    return m + soma(m+1,n);
}

void main()
{
    int m,n;
    printf("Digite o valor de M e N: ");
    scanf("%d %d",&m,&n);
    int cont = soma(m,n);
    printf("A soma de M a N eh %d",cont);
}
