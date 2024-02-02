#include <stdio.h>
const int ordem = 5;

int main(void){
    int mat[ordem][ordem],n,i,j,k,cont = 0;
    printf("PREENCHA A MATRIZ\n\n---------------------------------------");
    for(i = 0;i < ordem;i ++){
        for(j = 0;j < ordem;j ++){
            printf("\nDigite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i = 0;i < ordem;i ++){
        for(j = 0;j < ordem;j ++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n------------------------------------------------Digite o valor de N:\n");
    scanf("%d",&n);
    n = n - 1;
    for(j = 0;j < ordem;j ++){
        for(k = 1;k <= mat[j][n];k ++){
            if(mat[j][n] % k == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("\n%d",mat[j][n]);
        }
        cont = 0;
    }
}
