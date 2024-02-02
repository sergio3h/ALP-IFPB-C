#include <stdio.h>
#include <stdlib.h>
/*. Escreva um subprograma recursivo que receba como entrada um número inteiro N
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N
é igual a 5*/

void piramide(int n){
    if(n>0){
        int k;
        piramide(n-1);
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
    piramide(n);
}
