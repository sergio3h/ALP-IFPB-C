#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero entre 1000 e 9999: ");
    scanf("%d", &num);

    int milhar = num / 1000;
    int resto = num % 1000;
    int centena = resto / 100;
    resto = num % 100;
    int dezena = resto / 10;
    int unidade = resto % 10;

    printf("Os numeros absolutos sao %d, %d, %d, %d", milhar, centena, dezena, unidade);
    return 0;
}
