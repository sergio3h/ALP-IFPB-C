#include <stdio.h>
#include <stdlib.h>
/*O Banco do Povo está realizando uma grande promoção em seus financiamentos.
Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação
corresponde a 20% do valor do empréstimo. Os valores das demais prestações
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com
base nestas informações, escreva um subprograma recursivo que receba como
entrada o valor do empréstimo, o número de parcelas e um número inteiro N entre 1 e
240 e calcule qual será o valor da parcela N do empréstimo.*/

float parcela(float emp,int parcelas,int n){
    if(n==1){
        return 0.2*emp;
    }
    if(n>1){
        float restop = emp*0.8/parcelas-1;
        return restop * 1.07 + parcela(emp,parcelas,n-1);
    }
}


void main()
{
    float emp;
    int n,parcelas;
    printf("Digite o valor do emprestimo: ");
    scanf("%f",&emp);
    printf("Quantas parcelas: ");
    scanf("%d",&parcelas);
    printf("Qual parcela deseja saber o valor?: ");
    scanf("%d",&n);
    float p=parcela(emp,parcelas,n);
    printf("%.2f e o valor",p);
}
