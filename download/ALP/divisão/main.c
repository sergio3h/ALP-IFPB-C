#include <stdio.h>

int main() {
    int numero1, numero2;

    // Lê os dois números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Calcula o quociente e o resto da divisão
    int quociente = numero1 / numero2;
    int resto = numero1 % numero2;

    // Exibe os resultados
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
