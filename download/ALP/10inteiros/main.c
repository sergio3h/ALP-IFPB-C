#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int c=1;c<=10;c++){
        int n, k;
        printf("Digite um numero N");
        scanf("%d", &n);
    }

        int fat = 1;
    for(c=1;c<=10;c++){
        for(k=1;k<=n;k++){
            fat = fat * k;
        }
        printf("O fatorial de N e: %d", fat);
    }
    return 0;
}

