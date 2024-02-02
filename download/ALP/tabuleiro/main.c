#include <stdio.h>
const int ordem=5;
int main()
{
    int mat[ordem][ordem];
    int k,j,soma=0;

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Matriz %d linha %d coluna: ",k+1,j+1);
            scanf("%d", &mat[k][j]);
        }
    }
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("%d ", mat[k][j]);
        }
        printf("\n");
    }

    for(k=0;k<ordem;k++){
        soma=0;
        for(j=0;j<ordem;j++){
            soma = soma + mat[j][k];
        }
        printf("A soma da coluna %d eh: %d ",j+1, soma);
    }
    return 0;
}
