#include <stdio.h>
#include <stdlib.h>
/* Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e calcule o enésimo termo da série de Fibonacci.
*/

int fibbonaci(int n){
    if(n==1 || n==2){
        return 1;
    }
    if(n>2){
        return fibbonaci(n-2)+fibbonaci(n-1);
    }
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    int fib=fibbonaci(n);
    printf("%d",fib);
}
