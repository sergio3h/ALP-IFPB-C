#include <stdio.h>

int main() {
    const int ordem = 5;
    int matriz[ordem][ordem];

    // Preenche a matriz com n�meros fornecidos pelo usu�rio
    for (int i = 0; i < ordem; i++) {
        printf("Digite os elementos da linha %d da matriz:\n", i + 1);
        for (int j = 0; j < ordem; j++) {
            printf("Elemento %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica quantas linhas s�o nulas
    int linhasNulas = 0;
    for (int i = 0; i < ordem; i++) {
        int linhaNula = 1;  // Assume que a linha � nula
        for (int j = 0; j < ordem; j++) {
            if (matriz[i][j] != 0) {
                linhaNula = 0;  // A linha n�o � nula
                break;
            }
        }
        if (linhaNula) {
            linhasNulas++;
        }
    }

    // Exibe o resultado
    printf("Quantidade de linhas nulas na matriz: %d\n", linhasNulas);

    return 0;
}
