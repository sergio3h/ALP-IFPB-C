#include <stdio.h>
#include <stdlib.h>

int NumAlgarimos(int n){
    if(n<10){
        return 1;
    }
    return 1 + NumAlgarimos(n/10);
}

void main()
{
    int n;
    printf("Digite um numero");
    scanf("%d",&n);
    int NAlgarismo=NumAlgarimos(n);
    printf("O numero %d tem %d algarismos",n,NAlgarismo);
}
