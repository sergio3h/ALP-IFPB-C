#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este
ponto pertence � reta y = 2x +1. Esta verifica��o deve ser realizada atrav�s de um
subprograma.*/

void pertence(float x,float y){
    if(y==(2*x+1)){
        printf("Pertence");
    }
    else{
        printf("Nao pertence");
    }
}

void main()
{
    float x,y;
    printf("Digite X e Y: ");
    scanf("%f %f",&x,&y);
    pertence(x,y);
}
