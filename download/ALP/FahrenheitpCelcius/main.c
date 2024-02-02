#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperatura;
    printf("Digite temperatura em Fahrenheit: ");
    scanf("%d", &temperatura);

    int celsius = (temperatura - 32) / 1.75;
    printf("A temperatura em Celsius e: %d", celsius);
    return 0;
}
