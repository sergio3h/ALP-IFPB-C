#include <stdio.h>
#include <stdlib.h>
const int ordem =3;

void linhaNula(int mat[ordem][ordem],int n){

    int cont =0;
    for(int k=0;k<ordem;k++){
        if(mat[n][k]==0){
            cont++;
        }
    }
    if(cont == ordem){
        printf("Linha nula");
    }
    if(cont != ordem){
        printf("Nao Nula");
    }
}

void main()
{
    int mat[ordem][ordem];
    int k,j,n;
    for(j=0;j<ordem;j++){
        for(k=0;k<ordem;k++){
            printf("Preencha a matriz %d %d: ",k+1,j+1);
            scanf("%d",&mat[j][k]);
        }
    }
    printf("Digite N: ");
    scanf("%d",&n);

    linhaNula(mat[ordem][ordem],n);
}
