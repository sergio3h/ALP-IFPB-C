#include <stdio.h>
#include <stdlib.h>
/*O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai
percorrer durante uma viagem e o pre�o atual de um litro de combust�vel e calcule
quanto ele dever� gastar com combust�vel durante a viagem. O c�lculo deve ser
realizado atrav�s de um subprograma*/
float ValorCombustivel(float distancia,float preco){
    return (distancia/14) * preco;
}

void main()
{
    float distancia,preco;
    printf("Quan a distancia que ira percorrer? ");
    scanf("%f", &distancia);
    printf("Qual o pre�o do combustivel? ");
    scanf("%f", &preco);

    float gasto = ValorCombustivel(distancia,preco);
    printf("O valdor gasto em combustivel e de R$: %.2f",gasto);
}
