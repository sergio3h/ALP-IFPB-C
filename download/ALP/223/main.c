#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar. A
verifica��o de ser realizada atrav�s de um subprograma.*/

void par(int n){
    if(n%2==0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
}

void main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    par(n);
}
