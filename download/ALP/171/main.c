#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois vetores de 5 números reais cada e calcule o
produto escalar destes vetore*/

const int max=5;
int main()
{
    int veta[max], vetb[max];
    int k,j,i,soma=0;
    for(k=0;k<max;k++){
        printf("Escreva %d numeros pro vetorA: ",max-k);
        scanf("%d", &veta[k]);
    }

    for(j=0;j<max;j++){
        printf("Escreva %d numeros pro vetorB: ",max-j);
        scanf("%d", &vetb[j]);
    }
    for(i=0;i<max;i++){
        soma+=veta[i]*vetb[i];
    }

    printf("O produto escalar eh %d",soma);
    return 0;
}
