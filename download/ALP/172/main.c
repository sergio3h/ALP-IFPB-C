#include <stdio.h>

int main() {
    int vetor[10];
    int N;

    // Leitura dos valores do vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura do valor de N
    printf("Digite um número inteiro N (entre 1 e 10): ");
    scanf("%d", &N);

    if (N >= 1 && N <= 10) {
        int sequencias = 0;

        for (int i = 0; i <= 10 - N; i++) {
            int isSequencia = 1;

            for (int j = i; j < i + N - 1; j++) {
                if (vetor[j] >= vetor[j + 1]) {
                    isSequencia = 0;
                    break;
                }
            }

            if (isSequencia) {
                sequencias++;
            }
        }

        printf("Número de sequências de tamanho %d em ordem crescente: %d\n", N, sequencias);
    } else {
        printf("N deve estar no intervalo de 1 a 10.\n");
    }

    return 0;
}
