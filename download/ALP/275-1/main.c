#include <stdio.h>
#include <stdlib.h>
/*. Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
n�o negativo e imprima a sa�da mostrada abaixo. O exemplo abaixo considera que N
� igual a 5*/

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
