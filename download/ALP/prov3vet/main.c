#include <stdio.h>
#include <stdlib.h>
const int tam=5;
void main()
{
    int veta[tam],vetb[tam],vetc[tam*2];
    int k,j,i,par=0,imp=1;

    for(k=0;k<tam;k++){
        printf("Preencha o vetor A %d numeros: ",tam-k);
        scanf("%d",&veta[k]);
    }
    for(j=0;j<tam;j++){
        printf("Preencha o vetor B %d numeros: ",tam-j);
        scanf("%d",&vetb[j]);
    }
    for(i=0;i<tam*2;i++){
            vetc[par]=veta[i];
            vetc[imp]=vetb[i];
            par=par+2;
            imp=imp+2;

    }
    for(k=0;k<tam*2;k++){
        printf("%d ",vetc[k]);
    }
}
