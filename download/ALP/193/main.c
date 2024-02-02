#include <stdio.h>

int main() {
    const int ordem = 10;
    int matriz[ordem][ordem];

    // Preenche a matriz com números fornecidos pelo usuário
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica a quantidade de linhas e colunas nulas
    int linhasNulas = 0;
    int colunasNulas = 0;

    // Verifica linhas nulas
    for (int i = 0; i < ordem; i++) {
        int linhaNula = 1;  // Assume que a linha é nula
        for (int j = 0; j < ordem; j++) {
            if (matriz[i][j] != 0) {
                linhaNula = 0;  // A linha não é nula
                break;
            }
        }
        if (linhaNula) {
            linhasNulas++;
        }
    }

    // Verifica colunas nulas
    for (int j = 0; j < ordem; j++) {
        int colunaNula = 1;  // Assume que a coluna é nula
        for (int i = 0; i < ordem; i++) {
            if (matriz[i][j] != 0) {
                colunaNula = 0;  // A coluna não é nula
                break;
            }
        }
        if (colunaNula) {
            colunasNulas++;
        }
    }

    // Calcula a soma total de linhas e colunas nulas
    int totalNulas = linhasNulas + colunasNulas;

    // Exibe o resultado
    printf("\nQuantidade de linhas nulas: %d\n", linhasNulas);
    printf("Quantidade de colunas nulas: %d\n", colunasNulas);
    printf("Soma total de linhas e colunas nulas: %d\n", totalNulas);

    return 0;
}
