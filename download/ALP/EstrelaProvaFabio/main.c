#include <stdio.h>

void imprimeAsteriscos(int n) {
    if (n > 0) {

        for (int i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }

        printf("\n");

        imprimeAsteriscos(n - 1);
    }
}

int main() {
    int N;

    printf("Digite um n�mero inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um n�mero inteiro positivo.\n");
        return 1;  // Sa�da com erro
    }

    imprimeAsteriscos(N);

    return 0;  // Sa�da sem erro
}
