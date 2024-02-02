#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio;
    float area, perimetro;
    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;

    perimetro = 2 * 3.14 * raio;

    printf("A area do circulo e: %.2f.\nO Perimetro e : %.2f", area, perimetro);
    return 0;
}
