#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, raio;
    float volume;
    printf("Digite a altura da lata: ");
    scanf("%d", &altura);

    printf("Digite o raio da lata: ");
    scanf("%d", &raio);

    volume = 3.14 * (raio * raio) * altura;
    printf("O volume da lata de oleo e: %.2f", volume);
    return 0;
}
