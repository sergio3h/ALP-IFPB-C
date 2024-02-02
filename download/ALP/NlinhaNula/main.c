#include <stdio.h>
#include <stdlib.h>
/*Linha N nula*/
const int ordem=3;

int linha(int mat[ordem][ordem],int n){
    n=n-1;
    int cont=0;
    if(ordem <0){
        return cont;
    }
    if(mat[n][ordem]==0){
        cont ++;
    }
    return linha(mat[ordem][ordem -1],n);
}

void main()
{
    int mat[ordem][ordem];
    int k,j,n;
    for(k=0;k<ordem;k++){
        for(j=0;k<ordem;j++){
            printf("Preencha a matriz %d %d: ",k+1,j+1);
            scanf("%d",&mat[k][j]);
        }
    }
    printf("Digite o valor de N: " );
    scanf("%d",&n);

    int l=linha(mat[ordem][ordem],n);
    if(l==ordem){
        printf("Linha nula");
    }
    else{
        printf("Linha normal");
    }
}
