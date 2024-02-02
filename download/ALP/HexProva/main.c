#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal.*/

void hexa(int n){
    if(n<10){
        return n;
    }
    if(n>=10){
        hexa(n/16);
        int resto = n%16;
        switch(resto){
            case 10:printf("A");break;
            case 11:printf("B");break;
            case 12:printf("C");break;
            case 13:printf("D");break;
            case 14:printf("E");break;
            case 15:printf("F");break;
            if(resto<10){
                printf("n");break;
            }
        }
    }
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    hexa(n);
}
