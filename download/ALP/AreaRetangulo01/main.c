#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura;
    float area;
    printf("Informe a base do retangulo: ");
    scanf("%d", &base);

    printf("Informe a altura do retangulo: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A area do reangulo e: %.2f", area);
    return 0;
}
