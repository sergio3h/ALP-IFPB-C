#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto.
O valor absoluto deve ser calculado atrav�s de um subprograma (sem usar qualquer
subprograma fornecido pela linguagem de programa��o).*/

int absoluto(int n){
    if(n<0){
        return n * -1;
    }
    return n;

}

void main()
{
    int n;
    printf("Digite um nuemro: ");
    scanf("%d", &n);

    int abs=absoluto(n);
    printf("O valor absoluto eh %d",abs);
}
