#include <stdio.h>
#include <stdlib.h>
/*O Banco do Povo est� realizando uma grande promo��o em seus financiamentos.
Ele financia qualquer valor em at� 240 presta��es. O valor da primeira presta��o
corresponde a 20% do valor do empr�stimo. Os valores das demais presta��es
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com
base nestas informa��es, escreva um subprograma recursivo que receba como
entrada o valor do empr�stimo, o n�mero de parcelas e um n�mero inteiro N entre 1 e
240 e calcule qual ser� o valor da parcela N do empr�stimo.*/

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
