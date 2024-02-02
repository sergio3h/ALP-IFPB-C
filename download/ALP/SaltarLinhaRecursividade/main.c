#include <stdio.h>

int saltarLinhas(int n){
    if(n>=1){
        printf("\n");
        saltarLinhas(n-1);
    }
}

void main()
{
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    saltarLinhas(n);
}
