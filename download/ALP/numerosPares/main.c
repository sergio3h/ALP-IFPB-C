#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("Digite um numero");
    scanf("%d", &n);
    for(k=2;k<=n*2;k=k+2){
        printf("%d \n", k);
    }
    return 0;
}
