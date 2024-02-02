/*#include <stdio.h>

int main() {
    int N;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Verifica se N é maior que 0
    if (N <= 0) {
        printf("N deve ser maior que zero.\n");
        return 1; // Saída de erro
    }

    // Loop para imprimir a figura
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int N;

    // Solicita ao usuário o valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Verifica se N é maior que 0
    if (N <= 0) {
        printf("N deve ser maior que zero.\n");
        return 1; // Saída de erro
    }

    // Loop para imprimir a figura no formato de estrela
    for (int i = N; i >= 1; i--) {
        // Imprime espaços em branco à esquerda
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Imprime asteriscos
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Avança para a próxima linha
        printf("\n");
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuário o número de linhas da estrela (deve ser ímpar)
    printf("Digite um número ímpar para o tamanho da estrela: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número deve ser ímpar.\n");
        return 1; // Saída de erro
    }

    // Imprime a estrela
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1 || j == n / 2 + 1 || i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
