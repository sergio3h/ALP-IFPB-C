#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ini, pa, n, k;
    printf("Digite o termo inicial");
    scanf("%d", &ini);
    printf("Digite a razao de uma PA");
    scanf("%d", &pa);
    printf("Digite um inteiro N");
    scanf("%d", &n);

    for(k=ini;k<=ini+(pa*(n-1));k= k +pa){
        printf("%d ", k);
    }
    return 0;
}
