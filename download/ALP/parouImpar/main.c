#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero");
    scanf("%d", &num);

    float res = num % 2;
    if (res == 0){
        printf("O numero e par");
    }
    else {
        printf("O numero e impar");
    }
    return 0;
}
