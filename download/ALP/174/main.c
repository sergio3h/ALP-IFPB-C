#include <stdio.h>
#include <math.h>

int main() {
    double vetor[10];
    double modulo = 0.0;

    // Solicita os dez n�meros reais
    printf("Digite os dez n�meros reais do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    // Calcula o m�dulo do vetor
    for (int i = 0; i < 10; i++) {
        modulo += vetor[i] * vetor[i];
    }

    modulo = sqrt(modulo);

    printf("O m�dulo do vetor �: %lf\n", modulo);

    return 0;
}
