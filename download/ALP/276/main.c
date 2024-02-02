#include <stdio.h>
#include <stdlib.h>
void piramide(int n){
    if(n>0){
        int k;
        for(k=0;k<n;k++){
            printf("*");
        }
        printf("\n");
        piramide(n-1);
    }
}
void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    piramide(n);
}
