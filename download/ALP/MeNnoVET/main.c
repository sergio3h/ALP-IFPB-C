#include <stdio.h>
#include <stdlib.h>
/*Escreva um subprograma recursivo que receba como entrada um vetor de dez
n�meros inteiros j� ordenados, um n�mero inteiro X, e dois �ndices M e N e verifique
se o n�mero X est� presente no vetor entre as posi��es M e N.*/
const int max=10;
int Xpertence(int vet[],int max,int x,int m,int n){
    m=m-1;
    n=n-1;
    if(m>n){
        return 0;//nao pertence
    }
    if(vet[m]==x){
        return 1;
    }
    return Xpertence(vet,max,x,m+1,n);
}

void main()
{
    int k,x,m,n,vet[max];
    for(k=0;k<max;k++){
        printf("Escreva o vetor %d posicao: ",k+1);
        scanf("%d",&vet[k]);
    }
    printf("Digite X,MeN: ");
    scanf("%d %d %d",&x,&m,&n);
    int pertence=Xpertence(vet,max,x,m,n);
    if(pertence==1){
        printf("X esta entre M e N");
    }
    else{
        printf("X Nao pertence a M a N");
    }
}
