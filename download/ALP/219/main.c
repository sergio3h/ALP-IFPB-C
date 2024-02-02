#include <stdio.h>
#include <stdlib.h>

float consumo(float comanda){
    return (comanda * 1.1)+10.00;
}

void main()
{
    float comanda;
    printf("Quanto gastou? ");
    scanf("%f", &comanda);

    float valor = consumo(comanda);
    printf("0 valor da conta foi de R$ %.2f",valor);
}
