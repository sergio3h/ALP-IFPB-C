#include <stdio.h>

void decimalParaBinario(int numero) {
    int binario[8];  // Máximo de 8 bits para representar um número de 0 a 255
    int i;

    // Preenche o array binário
    for (i = 7; i >= 0; i--) {
        binario[i] = numero % 2;
        numero /= 2;
    }

    // Imprime o valor binário
    printf("O valor binário é: ");
    for (i = 0; i < 8; i++) {
        printf("%d", binario[i]);
    }
}

int main() {
    int numero;

    // Solicita ao usuário para digitar um número entre 0 e 255
    printf("Digite um número inteiro entre 0 e 255: ");
    scanf("%d", &numero);

    // Verifica se o número está no intervalo desejado
    if (numero >= 0 && numero <= 255) {
        // Converte e imprime o valor em binário
        decimalParaBinario(numero);
    } else {
        printf("O número digitado está fora do intervalo permitido.\n");
    }

    return 0;
}
