#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("Digite um numero para saber seus dividores");
    scanf("%d", &n);
    for(k=1;k<=n;k++){
        if(n%k==0){
            printf("%d \n", k);
        }
    }
    return 0;
}
