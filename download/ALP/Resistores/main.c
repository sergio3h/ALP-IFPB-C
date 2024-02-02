#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1, r2, r3;
    float Requivalente;
    printf("Digite a resistencia de R1");
    scanf("%f", &r1);

    printf("Digite a resistencia de R2");
    scanf("%f", &r2);

    printf("Digite a resistencia de R3");
    scanf("%d", &r3);

    Requivalente = (r1 * r2) / (r1 + r2) + r3;

    printf("A resistencia eh %.2f Ohm's", Requivalente);
    return 0;
}
