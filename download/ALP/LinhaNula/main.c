#include <stdio.h>
#include <stdlib.h>
const int tam=5;
void main()
{
    int veta[tam],vetb[tam],vetc[tam*2];
    int k,j,i;

    for(k=0;k<tam;k++){
        printf("Preencha o vetor A &d numeros: ",tam-k);
        scanf("%d",&veta[k]);
    }
    for(j=0;j<tam;j++){
        printf("Preencha o vetor b&d numeros: ",tam-j);
        scanf("%d",&vetb[j]);
    }
    for(i=0;i<tam*2;i+=2){
        vetc[i]=veta[i];
        vetc[i+1]=vetb[i];
    }
    for(k=0;k<tam*2;k++){
        printf("%d ",vetc[k]);
    }
}
