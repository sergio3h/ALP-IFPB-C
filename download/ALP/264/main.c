#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo em pascal que receba como parâmetro de
entrada três números inteiros positivos e calcule o MMC destes três números. Para
isto, você deve usar a função chamada menorDivisor, mostrada abaixo, que recebe
como entrada três números inteiros positivos e calcula qual o menor número inteiro
maior ou igual a 2 que divide pelo menos um dos três números recebido*/

int menorDivisor(int n1,int n2,int n3){
    int fator =2;

    while(n1%fator!=0 && n2%fator!=0 &&n3%fator3!=0){
        fator++;
    }
    return fator;
}

int mmc(int n1,int n2,int n3){
    if(n1==1&& n2==1 &&n3==1){
        return 1;
    }


}

void main()
{
    int n1,n2,n3;
    printf("Digite N1,N2,N3: ");
    scanf("%d %d %d",&n1,&n2,&n3);
}
