#include <stdio.h>

int main() {
    int M, N;
    double soma = 0;
    int contador = 0;

    // Solicita ao usu�rio os valores de M e N
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Verifica se M � menor ou igual a N
    if (M > N) {
        printf("M deve ser menor ou igual a N.\n");
        return 1; // Sa�da de erro
    }

    // Calcula a m�dia aritm�tica dos n�meros no intervalo [M, N]
    for (int i = M; i <= N; i++) {
        soma += i;
        contador++;
    }

    double media = soma / contador;

    // Exibe o resultado
    printf("A m�dia aritm�tica dos n�meros no intervalo [%d, %d] �: %.2lf\n", M, N, media);

    return 0;
}
