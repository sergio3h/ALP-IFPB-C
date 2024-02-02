#include <stdio.h>
#include <stdlib.h>
int kesimo(int n,int k){
    if(k==1){
        return n % 10;
    }
    return kesimo(n/10,k-1);
}
void main()
{
    int n,k;
    printf("Hello world!\n");
    scanf("%d",&n);
    printf("kessimo: ");
    scanf("%d",&k);
    int resultado=kesimo(n,k);
    printf("%d",resultado);
}
