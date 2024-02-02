#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor
da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
subprogramas para calcular cada informação solicitada. */

int milhar(int n){
    if(n<1000){
        return 0;
    }
    return n /1000;
}

int centena(int n){
    if(n<100){
        return 0;
    }
    int resto = n % 1000;
    return resto / 100;
}

int dezena(int n){
    if(n<10){
        return 0;
    }
    return (n / 10)%10;
}

int unidade(int n){
    if(n<1){
        return 0;
    }
    return n % 10;
}


void main()
{
    int n;
    printf("Digite um valor de 1 a 9999: ");
    scanf("%d", &n);

    int mil = milhar(n);
    int cem = centena(n);
    int dez = dezena(n);
    int um = unidade(n);

    printf("Unidade: %d\n",um);
    printf("Dezena: %d\n",dez);
    printf("Centena: %d\n",cem);
    printf("Milhar: %d\n",mil);
}
