#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada dois vetores de 10
n�meros inteiros cada e um n�mero inteiro N e verifique se os dois vetores s�o
id�nticos a partir da posi��o N.
*/
const int max=10;

int identico(int veta[max],int vetb[max],int n){
    if (n >= max) {
        return 1;
    }

  // Se os elementos na posi��o N dos dois vetores forem diferentes, ent�o os vetores n�o s�o id�nticos
    if (veta[n] != vetb[n]) {
        return 0;
    }

  // Caso contr�rio, chama o subprograma recursivamente para a pr�xima posi��o
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
