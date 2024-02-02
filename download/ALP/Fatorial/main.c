
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    printf("Digite um numero N");
    scanf("%d", &n);
    int fat = 1;
    for(k=1;k<=n;k++){
        fat = fat * k;
    }
    printf("O fatorial de N e: %d", fat);
    return 0;
}

