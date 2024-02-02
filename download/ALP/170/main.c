#include <stdio.h>

int main() {
    int n;

    // Solicita o número de portas existentes
    printf("Digite o número total de portas: ");
    scanf("%d", &n);

    // Inicialmente, todas as portas estão fechadas
    int portas_abertas = 0;

    for (int i = 1; i <= n; i++) {
        int divisor_count = 0;

        // Verifica quantos divisores o número da porta tem
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisor_count++;
            }
        }

        // Se o número de divisores for ímpar, a porta estará aberta
        if (divisor_count % 2 == 1) {
            portas_abertas++;
        }
    }

    printf("Número de portas que ficaram abertas: %d\n", portas_abertas);

    return 0;
}
