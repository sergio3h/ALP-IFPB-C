#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int posicao;
    printf("Informe a posicao");
    scanf("%d", &posicao);

    int tempo = (posicao / 5) * 10;

    int guinche = (posicao % 5) ;

    printf("O guinche eh: %d, tempo de espera eh: %d", guinche, tempo);
    return 0;
}
