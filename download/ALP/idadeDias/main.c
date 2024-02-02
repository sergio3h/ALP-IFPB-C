#include <stdio.h>

int main() {
    int idade;

    // Lê a idade em dias
    printf("Digite a idadde em dias: ");
    scanf("%d", &idade);

    // Calcula os anos e o resto da divisão
    int anos = idade / 360;
    int restoAnos = idade % 360;
    int meses = restoAnos / 30;
    int dias = meses % 30;

    // Exibe os resultados
    printf("Voce tem: %d anos,", anos);
    printf(" %d meses, %d dias", meses, dias);

    return 0;
}
