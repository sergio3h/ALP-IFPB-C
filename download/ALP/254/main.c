#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o valor do produto de x por y.*/

int produto(int x,int y){
    if(x==0 || y ==0){
        return 0;
    }
    if(x==1){
        return y;
    }
    if(y==1){
        return x;
    }
    return x + produto(x,y-1);

}

void main()
{
    int x,y;
    printf("Digite o valor de X e Y: ");
    scanf("%d %d",&x,&y);
    int multiplicacao=produto(x,y);
    printf("O resultado eH %d",multiplicacao);
}
