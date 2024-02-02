#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada o termo inicial e a
razão de uma progressão aritmética e um número inteiro positivo N e calcule o
enésimo termo da progressão.*/

int ProgressaoAritmetica(int ini,int razao,int n){
    if(razao == 0){
    }
    if(n==1){
        return ini;
    }
    return razao + ProgressaoAritmetica(ini,razao,n-1);
}

void main()
{
    int ini,razao,n;
    printf("Digite o termo inicial: ");
    scanf("%d",&ini);
    printf("Digite a Razao: ");
    scanf("%d",&razao);
    printf("Digite o valor de N: ");
    scanf("%d",&n);

    int pa=ProgressaoAritmetica(ini,razao,n);
    printf("%d termo da Pa e : %d",n,pa);
}
