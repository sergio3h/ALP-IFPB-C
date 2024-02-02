#include <stdio.h>

const int ordem = 5;

int main() {
    int matriz[ordem][ordem];
    int numero, i, j, contador = 0;

    // Preenchendo a matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Pedindo o número a ser verificado
    printf("\nDigite o número a ser verificado: ");
    scanf("%d", &numero);

    // Verificando em quantas linhas o número aparece
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (matriz[i][j] == numero) {
                contador++;
                break;  // Se encontrou o número na linha, não precisa verificar mais nesta linha
            }
        }
    }

    // Imprimindo o resultado
    printf("\nO número %d aparece em %d linhas da matriz.\n", numero, contador);

    return 0;
}
