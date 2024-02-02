#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um n�mero inteiro N
positivo e calcule o en�simo termo da s�rie de Fibonacci.*/

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    int fib=fibonacci(n);
    printf("%d",fib);
}
