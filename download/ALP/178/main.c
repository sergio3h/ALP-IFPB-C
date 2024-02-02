#include <stdio.h>
#include <stdlib.h>
const int ordem =5;
int main()
{
    int k,j,mat[ordem][ordem];
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Digite uma matriz quadrada: ");
            scanf("%d", &mat[k][j]);
        }
    }

    printf("Matriz escrita: \n");
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("%d ",mat[k][j]);
        }
        printf("\n");
    }
    printf("Matriz Diagonal principal: \n");
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(k==j || j==k)
                printf("%d ",mat[k][j]);
        }
        printf("\n");
    }
    return 0;
}
