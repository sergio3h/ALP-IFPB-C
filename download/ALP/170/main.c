#include <stdio.h>

int main() {
    int n;

    // Solicita o n�mero de portas existentes
    printf("Digite o n�mero total de portas: ");
    scanf("%d", &n);

    // Inicialmente, todas as portas est�o fechadas
    int portas_abertas = 0;

    for (int i = 1; i <= n; i++) {
        int divisor_count = 0;

        // Verifica quantos divisores o n�mero da porta tem
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisor_count++;
            }
        }

        // Se o n�mero de divisores for �mpar, a porta estar� aberta
        if (divisor_count % 2 == 1) {
            portas_abertas++;
        }
    }

    printf("N�mero de portas que ficaram abertas: %d\n", portas_abertas);

    return 0;
}
