#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada dois vetores de 10
números inteiros cada e um número inteiro N e verifique se os dois vetores são
idênticos a partir da posição N.
*/
const int max=10;

int identico(int veta[max],int vetb[max],int n){
    if (n >= max) {
        return 1;
    }

  // Se os elementos na posição N dos dois vetores forem diferentes, então os vetores não são idênticos
    if (veta[n] != vetb[n]) {
        return 0;
    }

  // Caso contrário, chama o subprograma recursivamente para a próxima posição
    return identico(veta, vetb, n + 1);
}


void main()
{
    int veta[max],vetb[max],n,k;
    for(k=0;k<max;k++){
        printf("Preencha a posicao %d: ",k+1);
        scanf("%d",&veta[k]);
    }
    for(k=0;k<max;k++){
        printf("Preencha a posicao %d: ",k+1);
        scanf("%d",&vetb[k]);
    }
    printf("Digite N: ");
    scanf("%d",&n);

    int ident=identico(veta,vetb,n);
    if(ident==0){
        printf("Nao e identico");
    }
    else{
        printf("Os vetores sao identicos");
    }
}
