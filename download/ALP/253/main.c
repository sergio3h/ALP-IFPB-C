#include <stdio.h>
#include <stdlib.h>

void SaltarLinhas(int n){
    if(n>=1){
        printf("\n");
        SaltarLinhas(n-1);
    }
}

void main()
{
    int n;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    SaltarLinhas(n);
}
