#include <stdio.h>
#include <stdlib.h>
const int ordem=3;
void main()
{
    /*Incompleto*/
    int k,j;
    int mat1[ordem][ordem],mat2[ordem][ordem];
    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Digite a um numero para a matriz 1 %d linha %d coluna",ordem - k,ordem - j);
            scanf("%d", &mat1[k][j]);
        }
    }

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            printf("Digite a um numero para a matriz 2 %d linha %d coluna",ordem - k,ordem - j);
            scanf("%d", &mat2[k][j]);
        }
    }

    for(k=0;k<ordem;k++){
        for(j=0;j<ordem;j++){
            if(mat1[k][j]==mat2[])
            "%d", &mat1[k][j]);
        }
    }
}
