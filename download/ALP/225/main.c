#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois n�meros inteiros M e N e verifique se N �
m�ltiplo de M. Esta verifica��o deve ser realizada atrav�s de um subprograma.
*/

void multiplo(int m,int n){
    if(n%m==0){
        printf("E multiplo");
    }
    else{
        printf("Nao e multiplo");
    }

}

void main()
{
    int m,n;
    printf("Digite M e N: ");
    scanf("%d %d",&m,&n);
    multiplo(m,n);
}
