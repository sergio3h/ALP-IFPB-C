#include <stdio.h>
#include <stdlib.h>

void estrela(int n){
    if(n>0){
        int k;
        estrela(n-1);
        for(k=0;k<n;k++){
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
    estrela(n);
}
