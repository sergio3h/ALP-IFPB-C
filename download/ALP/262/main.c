#include <stdio.h>
#include <stdlib.h>

int divisao(int x,int y){
    if(x==y){
        return 1;
    }
    if(x==0){
        return 0;
    }
    if(x<y){
        return 0;
    }
    return 1+ divisao(x-y,y);
}


void main()
{
    int x,y;
    printf("Digite o valor de X e Y: ");
    scanf("%d %d", &x,&y);
    if(y==0){
        printf("Incapaz de executar");
    }
    int div=divisao(x,y);
    printf("O resultado eh %d",div);

}
