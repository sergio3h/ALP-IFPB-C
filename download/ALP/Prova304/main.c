#include <stdio.h>
#include <stdlib.h>

void piramide(int n){
    if(n==0){
        return;
    }
    piramide(n-1);
    if(n>0){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
}


void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    piramide(n);
}
