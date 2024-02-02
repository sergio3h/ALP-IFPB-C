#include <stdio.h>
#include <stdlib.h>
const int certa = 5; errada = -3;
int main()
{
    int qCerto, qErrado, qBranco, resultado;
    printf("Quantas questoes certas? ");
    scanf("%d", &qCerto);
    printf("Quantas questoes erradas? ");
    scanf("%d", &qErrado);
    printf("Quantas em branco?");
    scanf("%d", &qBranco);

    resultado = (qCerto * certa) + (qErrado * errada) + (qBranco * 0);
    printf("Teve %d pontos", resultado);
    return 0;
}
