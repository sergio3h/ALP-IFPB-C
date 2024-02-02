#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um n�mero inteiro n e
um n�mero inteiro positivo k e identifique o k-�simo d�gito do n�mero n (da direita
para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do
subprograma deve ser o n�mero 9.*/

int kesimo(int n,int k){
    if(k==1){
        return n % 10;
    }
    if(k==2){
        return (n/10)%10;
    }
    return kesimo(n/10,k-1);
}

void main()
{
    int n,k;
    printf("Digite N: ");
    scanf("%d",&n);
    printf("Digite K: ");
    scanf("%d",&k);
    int ka = kesimo(n,k);
    printf("%d",ka);
}
