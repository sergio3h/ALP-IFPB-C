#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;
    float perimetro;
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado1);

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado2);

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado3);

    perimetro = lado1 + lado2 + lado3;
    printf("O perimetro do triangulo e: %.2f", perimetro);
    return 0;
}
