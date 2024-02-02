#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um número inteiro e
calcule a sua quantidade de algarismos.*/

int contAlga(int n){
    if(n<10){
        return 1;
    }
    if(n>9 && n<100 ){
        return 2;
    }
    return 1+ contAlga(n/10);
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    int cont = contAlga(n);
    printf("%d algarismos",cont );
}
