#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado;
    float area, perimetro;
    printf("Informe o lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * 2;

    perimetro = lado * 4;

    printf("A area do quadrado e: %.2f.\nO Perimetro e : %2f", area, perimetro);
    return 0;
}
