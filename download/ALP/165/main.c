#include <stdio.h>

int main() {
    int tamanho = 5;
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorC[tamanho * 2];  // Tamanho m�ximo poss�vel

    // Leitura do vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Leitura do vetor B
    printf("\nDigite os elementos do vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    int tamanhoC = 0;  // Tamanho atual do vetor C

    // Verifica elementos presentes nos dois vetores
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (vetorA[i] == vetorB[j]) {
                // Verifica se o elemento j� est� em vetorC
                int duplicado = 0;
                for (int k = 0; k < tamanhoC; k++) {
                    if (vetorA[i] == vetorC[k]) {
                        duplicado = 1;
                        break;
                    }
                }
                // Adiciona o elemento a vetorC se n�o estiver duplicado
                if (!duplicado) {
                    vetorC[tamanhoC] = vetorA[i];
                    tamanhoC++;
                }
                break;  // Sai do loop interno ap�s encontrar correspond�ncia
            }
        }
    }

    // Exibe o vetor resultante
    printf("\nO vetor resultante C cont�m os elementos presentes em A e B, sem repeti��es:\n");
    for (int i = 0; i < tamanhoC; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
