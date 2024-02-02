#include <stdio.h>
#include <stdlib.h>
const int ordem =3;
void main()
{
    int mat[ordem][ordem];
    int linhas,colunas,n, cont=0;
    for(linhas=0;linhas<ordem;linhas++){
        for(colunas=0;colunas<ordem;colunas++){
            printf("Digite uma matriz com %d linhas e %d colunas: \n", ordem - linhas,ordem - colunas);
            scanf("%d", &mat[linhas][colunas]);
        }
    }
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("A matriz final: \n");

    for(linhas=0;linhas<ordem;linhas++){
        for(colunas=0;colunas<ordem;colunas++){
            printf("%d ",mat[linhas][colunas]);
        }
        printf("\n");
    }

    for(linhas=0;linhas<ordem;linhas++){
        for(colunas=0;colunas<ordem;colunas++){
            if(mat[linhas][colunas]== n){
                cont++;
            }
        }
    }
    printf("N aparece em %d linhas", cont);
}
