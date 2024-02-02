#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n==0){
        return 0;
    }

    if(n>=10){
        return n%10 + soma(n/10);
    }
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);

    int som=soma(n);
    printf("%d soma total",som);
}
