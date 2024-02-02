#include <stdio.h>
#include <stdlib.h>
/*Binario*/
void main()
{
    int binario[8];
    int numero,k,resto;
    printf("Digite o valor para transf em binario: ");
    scanf("%d", &numero);

    for(k=7;k>=0;k--){
        binario[k] = numero % 2;
        numero /= 2;
    }
    printf("O valor em binario eh: \n");
    for(k=0;k<8;k++){
        printf("%d",binario[k]);
    }
}
