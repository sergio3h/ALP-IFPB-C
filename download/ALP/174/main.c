#include <stdio.h>
#include <math.h>

int main() {
    double vetor[10];
    double modulo = 0.0;

    // Solicita os dez números reais
    printf("Digite os dez números reais do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    // Calcula o módulo do vetor
    for (int i = 0; i < 10; i++) {
        modulo += vetor[i] * vetor[i];
    }

    modulo = sqrt(modulo);

    printf("O módulo do vetor é: %lf\n", modulo);

    return 0;
}
