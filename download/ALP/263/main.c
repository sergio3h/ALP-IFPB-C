#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função
mod.*/
float divisao(float x,float y){
    if(x==y){
        return 0;
    }
    if(x==0){
        return 0;
    }
    if(x>y){
        return divisao(x-y,y);
    }
    return x;
}


void main()
{
    float x,y;
    printf("Digite o valor de X e Y: ");
    scanf("%f %f", &x,&y);
    if(y==0){
        printf("Incapaz de executar");
    }
    float div=divisao(x,y);
    printf("O resultado eh %f",div);

}



