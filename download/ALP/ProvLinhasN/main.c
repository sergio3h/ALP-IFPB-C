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

    // Pedindo o n�mero a ser verificado
    printf("\nDigite o n�mero a ser verificado: ");
    scanf("%d", &numero);

    // Verificando em quantas linhas o n�mero aparece
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (matriz[i][j] == numero) {
                contador++;
                break;  // Se encontrou o n�mero na linha, n�o precisa verificar mais nesta linha
            }
        }
    }

    // Imprimindo o resultado
    printf("\nO n�mero %d aparece em %d linhas da matriz.\n", numero, contador);

    return 0;
}
