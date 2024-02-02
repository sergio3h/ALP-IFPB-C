#include <stdio.h>
#include <stdlib.h>

void arvore(int n){
    if(n>0){
        int k;
        for(k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
        arvore(n-1);
    }
}
void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    arvore(n);
}
