#include <stdio.h>
#include <stdlib.h>

int ContAlgorismos(int n){
    if(n==0){
        return 0;
    }
    return n%10 + ContAlgorismos(n/10);
}

void main()
{
    int n;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    int Cont=ContAlgorismos(n);
    printf("A soma eh %d",Cont);
}
