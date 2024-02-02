#include <stdio.h>
#include <math.h>

// Fun��o para calcular o cosseno absoluto
double calcularCossenoAbsoluto(double seno) {
    double cosseno = sqrt(1 - seno * seno); // Usando a identidade trigonom�trica cosseno^2 + seno^2 = 1
    return fabs(cosseno); // Usando a fun��o fabs para obter o valor absoluto do cosseno
}

int main() {
    double seno;

    // Solicita ao usu�rio que insira o valor do seno
    printf("Informe o valor do seno do angulo: ");
    scanf("%lf", &seno);

    // Verifica se o valor do seno est� no intervalo v�lido (-1 <= seno <= 1)
    if (seno >= -1.0 && seno <= 1.0) {
        // Calcula o cosseno absoluto usando a fun��o
        double cossenoAbsoluto = calcularCossenoAbsoluto(seno);

        // Imprime o resultado
        printf("O valor absoluto do cosseno do angulo e: %lf\n", cossenoAbsoluto);
    } else {
        // Mensagem de erro se o valor do seno estiver fora do intervalo v�lido
        printf("Erro: O valor do seno deve estar no intervalo de -1 a 1.\n");
    }

    return 0;
}
