/*Caculo de preço teto de ação*/
#include <stdio.h>

int main()
{
    float dy,soma=0,med,teto;
    int k;
    for(k=1;k<=5;k++){
        printf("Digite o valor do %d*DY: ",k);
        scanf("%f", &dy);
        soma = soma + dy;
    }
    med = soma/5;
    teto = (med*100)/9;
    printf("O preço teto eh: %.2f R$",teto);
    return 0;
}
