#include <stdio.h>
#include <stdlib.h>
/* Escreva um subprograma recursivo que receba como entrada dois n�meros inteiros x
e y e calcule o resto da divis�o de x por y. Para isso, n�o deve ser usada a fun��o
mod*/

float resto(float x,float y){
    if(x==y){
        return 0;
    }
    if(x==0){
        return 0;
    }
    if(x>y){
        return resto(x-y,y);
    }
    return x;
}

void main()
{
    float x,y;
    printf("Digite XeY: ");
    scanf("%f %f",&x,&y);
    if(y==0){
        printf("Incapaz de resolver");
    }
    float rest=resto(x,y);
    printf("O resto foi %f",rest);

}
