#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 < n2){
        printf("O segundo e maior que o primeiro");
    }
    else if(n1 == n2){
        printf("Os valores sao iguais");
    }
    else {
            printf("O primeiro e maior que o segundo");
    }
    return 0;
}
