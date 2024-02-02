#include <stdio.h>
#include <stdlib.h>
/*O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser
realizado através de um subprograma*/
float ValorCombustivel(float distancia,float preco){
    return (distancia/14) * preco;
}

void main()
{
    float distancia,preco;
    printf("Quan a distancia que ira percorrer? ");
    scanf("%f", &distancia);
    printf("Qual o preço do combustivel? ");
    scanf("%f", &preco);

    float gasto = ValorCombustivel(distancia,preco);
    printf("O valdor gasto em combustivel e de R$: %.2f",gasto);
}
