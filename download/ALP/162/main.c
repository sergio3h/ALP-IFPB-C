#include <stdio.h>

void decimalParaBinario(int numero) {
    int binario[8];  // M�ximo de 8 bits para representar um n�mero de 0 a 255
    int i;

    // Preenche o array bin�rio
    for (i = 7; i >= 0; i--) {
        binario[i] = numero % 2;
        numero /= 2;
    }

    // Imprime o valor bin�rio
    printf("O valor bin�rio �: ");
    for (i = 0; i < 8; i++) {
        printf("%d", binario[i]);
    }
}

int main() {
    int numero;

    // Solicita ao usu�rio para digitar um n�mero entre 0 e 255
    printf("Digite um n�mero inteiro entre 0 e 255: ");
    scanf("%d", &numero);

    // Verifica se o n�mero est� no intervalo desejado
    if (numero >= 0 && numero <= 255) {
        // Converte e imprime o valor em bin�rio
        decimalParaBinario(numero);
    } else {
        printf("O n�mero digitado est� fora do intervalo permitido.\n");
    }

    return 0;
}
