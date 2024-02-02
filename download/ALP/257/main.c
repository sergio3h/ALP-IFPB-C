#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada dois números inteiros
correspondentes aos valores da base e do expoente e calcule o valor da potenciação.
Você pode supor que o expoente é um valor não negativo e que o caso 00 é tratado
no programa principal (ou seja, não precisa ser tratado dentro do subprograma)*/

int potenciacao(int n,int j){
    if(j==0){
        return 1;
    }
    if(j==1){
        return n;
    }
    if(n==1){
        return 1;
    }

    return n * potenciacao(n,j-1);
}

void main()
{
    int n,j;
    printf("Digite o valor da base e do expoente: ");
    scanf("%d %d",&n,&j);
    if(n==0 && j==0){
        printf("Comando inválido");
    }
    int pot=potenciacao(n,j);
    printf("A potenciacao de %d por %d eh %d",n,j,pot);
}
