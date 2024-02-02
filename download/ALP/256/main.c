#include <stdio.h>

// Subprograma recursivo para imprimir os N primeiros números da diagonal principal
void DiagonalPrincipal(int mat[5][5], int n, int i) {
    // Caso base: se i for maior que n, encerra a recursão
    if (i > n) {
        return;
    }

    // Imprime o elemento da diagonal principal na posição i
    printf("%d ", mat[i][i]);

    // Chama recursivamente para o próximo elemento
    DiagonalPrincipal(mat, n, i + 1);
}

int main() {
    int mat[5][5];
    int i, j, n;

    // Leitura da matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Leitura do valor de N
    printf("Digite o valor de N (entre 1 e 5): ");
    scanf("%d", &n);

    // Verifica se N está no intervalo válido
    if (n >= 1 && n <= 5) {
        // Chamada do subprograma para imprimir os N primeiros elementos da diagonal principal
        printf("Os %d primeiros elementos da diagonal principal são:\n", n);
        DiagonalPrincipal(mat, n, 0);
    } else {
        printf("Valor de N fora do intervalo permitido.\n");
    }

    return 0;
}
