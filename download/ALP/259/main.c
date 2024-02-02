#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal*/


void hexadecimal(int n){
    if(n==0){
        printf("%d",n);
    }
    if(n==1){
        printf("%d",n);
    }
    if(n>1){
        int resto = n%16;
        hexadecimal(n/16);
        if(resto <10){
            printf("%d",resto);
        }
        if(resto==10){
            printf("A");
        }
        if(resto==11){
            printf("B");
        }
        if(resto==12){
            printf("C");
        }
        if(resto==13){
            printf("D");
        }
        if(resto==14){
            printf("E");
        }
        if(resto==15){
            printf("F");
        }
    }
}

void main()
{
    int n;
    printf("Digite o valor de N: ");
    scanf("%d",&n);

    hexadecimal(n);
}
