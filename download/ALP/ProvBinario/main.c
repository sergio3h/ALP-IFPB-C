#include <stdio.h>
#include <stdlib.h>
const int max=8;
int main()
{
    int binario[max];
    int k,j,numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(k=7;k>=0;k--){
        binario[k]=numero%2;
        numero=numero/2;
    }
    printf("O valor em binario eh: \n");
    for(j=0;j<max;j++){
        printf("%d", binario[j]);
    }
    return 0;
}
