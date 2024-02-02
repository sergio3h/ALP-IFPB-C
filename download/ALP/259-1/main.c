#include <stdio.h>
#include <stdlib.h>
/*. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal.
*/

void hexadecimal(int n){
    if(n==0){
        printf("%d",n);
    }
    if(n<10){
        printf("%d",n);
    }
    if(n>=10){
        hexadecimal(n/16);
        int resto = n%16;
        if(resto == 10){
            printf("A");
        }
        if(resto == 11){
            printf("B");
        }
        if(resto == 12){
            printf("C");
        }
        if(resto == 13){
            printf("D");
        }
        if(resto == 14){
            printf("E");
        }
        if(resto == 15){
            printf("F");
        }
        if(resto < 10){
            printf("%d",resto);
        }
    }
}

void main()
{
    int n;
    printf("Digite N: ");
    scanf("%d",&n);
    hexadecimal(n);
}
