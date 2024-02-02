#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A
verificação de ser realizada através de um subprograma.*/

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
