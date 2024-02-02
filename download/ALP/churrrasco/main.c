#include <stdio.h>
#include <stdlib.h>
const float consumo = 250;
int main()
{
    float pessoas;
    printf("Quantas pessoas vao participar do churrasco? ");
    scanf("%f", &pessoas);

    float carne = (pessoas * consumo)/ 1000;

    printf("Devem comprar %.2f quilos de carne", carne);
    return 0;
}
