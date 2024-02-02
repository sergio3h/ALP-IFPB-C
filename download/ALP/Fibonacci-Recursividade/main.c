#include <stdio.h>
#include <stdlib.h>
//função para calcular o N-essimo da sequencia
int fibbonaci(int n){
    //se n for 1 ou 2, retorne 1
    if(n==1 || n==2){
        return 1;
    }
    //chamada recursiva para calcular o termo n-2 somando o termo n-1
    return fibbonaci(n-2)+fibbonaci(n-1);
}

int main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    int fib = fibbonaci(n);
    printf("%d",fib);
}
