#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sucessor;
    printf("Digite um numero: ");
    scanf("%d", &num);

    sucessor = num + 1;

    printf("Seu sucessor e: %d", sucessor);
    return 0;
}
