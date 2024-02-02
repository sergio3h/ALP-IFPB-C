#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetor[tamanho];

    // Leitura do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Algoritmo de ordenação (Bubble Sort)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibe o vetor ordenado
    printf("\nO vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
