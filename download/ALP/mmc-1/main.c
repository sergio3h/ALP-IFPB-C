#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa C que leia três números inteiros positivos e calcule o Mínimo
Múltiplo Comum desses três números. O cálculo do MMC deve ser feito por meio de
um subprograma recursivo. Como dica, crie primeiro um subprograma que receba
como parâmetros três números inteiros positivos e encontre o menor número maior
ou igual a 2 que seja um divisor exato de pelo menos um desses três números. */

int menorDivisor(int n1,int n2,int n3){
    int fator =2;
    while(n1%fator != 0 || n2%fator!=0 || n3%fator!=0){
        fator++;
    }
    return fator;
}

int mmc(int n1,int n2,int n3){
    if(n1==1&&n2==1&&n3==1){
        return 1;
    }
    int fator = menorDivisor(n1,n2,n3);
    if(n1%fator==0){
        n1=n1/fator;
    }
    if(n2%fator==0){
        n2=n2/fator;
    }
    if(n3%fator==0){
        n3=n3/fator;
    }
    return fator*mmc(n1,n2,n3);

}

void main()
{
    int n1,n2,n3;
    printf("Digite o valor de n1,n2,n3: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    int resultado=mmc(n1,n2,n3);
    printf("O MMC eh %d", resultado);
}
