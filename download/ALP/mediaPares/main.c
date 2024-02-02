#include <stdio.h>

int main() {
    int M, N;
    double soma = 0;
    int contador = 0;

    // Solicita ao usuário os valores de M e N
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Verifica se M é menor ou igual a N
    if (M > N) {
        printf("M deve ser menor ou igual a N.\n");
        return 1; // Saída de erro
    }

    // Calcula a média aritmética dos números no intervalo [M, N]
    for (int i = M; i <= N; i++) {
        soma += i;
        contador++;
    }

    double media = soma / contador;

    // Exibe o resultado
    printf("A média aritmética dos números no intervalo [%d, %d] é: %.2lf\n", M, N, media);

    return 0;
}
