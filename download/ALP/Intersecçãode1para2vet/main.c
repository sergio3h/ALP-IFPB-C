#include <stdio.h>
#include <stdlib.h>

const int TAMANHO = 5;

int pertence(int vet[], int n) {
    int k;
    for (k = 0; k < TAMANHO; k++) {
        if (vet[k] == n) {
            return 1;
        }
    }
    return 0;
}

void diferenca(int vet1[], int vet2[]) {
    int k;
    for (k = 0; k < TAMANHO; k++) {
        if (!pertence(vet2, vet1[k])) {
            printf("%d ", vet1[k]);
        }
    }
}

int main() {
    int vet1[TAMANHO], vet2[TAMANHO];
    int k;

    for (k = 0; k < TAMANHO; k++) {
        printf("Digite vet1 posicao %d: ", k + 1);
        scanf("%d", &vet1[k]);
    }

    for (k = 0; k < TAMANHO; k++) {
        printf("Digite vet2 posicao %d: ", k + 1);
        scanf("%d", &vet2[k]);
    }

    diferenca(vet1, vet2);

    return 0;
}
