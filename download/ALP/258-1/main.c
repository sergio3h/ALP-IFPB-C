#include <stdio.h>
#include <stdlib.h>
/* Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em binário.*/

void binario(int n){
    if(n==1 || n== 0){
        printf("%d",n);
    }
    if(n>1){
        binario(n/2);
        printf("%d",n%2);
    }
}

void main()
{
    int n;
    printf("Digite N:");
    scanf("%d",&n);
    binario(n);
}
