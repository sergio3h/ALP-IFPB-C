#include <stdio.h>
#include <stdlib.h>

void star(int n){
    if(n>0){
        star(n-1);
        for(int k=0;k<n;k++){
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
    star(n);
}
