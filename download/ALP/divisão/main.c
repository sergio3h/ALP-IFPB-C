#include <stdio.h>

int main() {
    int numero1, numero2;

    // L� os dois n�meros inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Calcula o quociente e o resto da divis�o
    int quociente = numero1 / numero2;
    int resto = numero1 % numero2;

    // Exibe os resultados
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
