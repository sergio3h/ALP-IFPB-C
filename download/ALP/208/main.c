#include <stdio.h>
#include <math.h>

// Função para calcular o cosseno absoluto
double calcularCossenoAbsoluto(double seno) {
    double cosseno = sqrt(1 - seno * seno); // Usando a identidade trigonométrica cosseno^2 + seno^2 = 1
    return fabs(cosseno); // Usando a função fabs para obter o valor absoluto do cosseno
}

int main() {
    double seno;

    // Solicita ao usuário que insira o valor do seno
    printf("Informe o valor do seno do angulo: ");
    scanf("%lf", &seno);

    // Verifica se o valor do seno está no intervalo válido (-1 <= seno <= 1)
    if (seno >= -1.0 && seno <= 1.0) {
        // Calcula o cosseno absoluto usando a função
        double cossenoAbsoluto = calcularCossenoAbsoluto(seno);

        // Imprime o resultado
        printf("O valor absoluto do cosseno do angulo e: %lf\n", cossenoAbsoluto);
    } else {
        // Mensagem de erro se o valor do seno estiver fora do intervalo válido
        printf("Erro: O valor do seno deve estar no intervalo de -1 a 1.\n");
    }

    return 0;
}
