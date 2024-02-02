#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, cont = 0;
    printf("Digite um numero para saber se e primo");
    scanf("%d", &n);
    for(k=1;k<=n;k++){
        if(n%k==0){
            cont++;
            printf("%d \n", k);
        }
    }
    if(cont==2){
        printf("E primo");
    }
    return 0;
}
