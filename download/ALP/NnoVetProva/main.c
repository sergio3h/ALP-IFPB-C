#include <stdio.h>
#include <stdlib.h>
const int max=10;

int pertence(int vet[],int max,int j,int n){
    if(j>max){
        return 0;
    }
    if(vet[j]==n){
        return 1;
    }
    pertence(vet,max,j+1,n);
}

void main()
{
    int vet[max];
    int n,k,j;
    for(k=0;k<max;k++){
        printf("Prencha o vet posicao %d: ",k+1);
        scanf("%d",&vet[k]);
    }

    printf("Digite J: ");
    scanf("%d",&j);

    printf("Digite N: ");
    scanf("%d",&n);


    int per=pertence(vet,max,j,n);
    if(per ==1){
        printf("N Pertence");
    }
    if(per==0){
        printf("Nao pertence");
    }
}
