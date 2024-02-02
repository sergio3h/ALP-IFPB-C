#include <stdio.h>
#include <stdlib.h>
int somaIntervalo(int min,int max){
    if(min==max){
        return min;
    }
    return min + somaIntervalo(min+1,max);

}
void main()
{
    int m,n;
    printf("Informe os numeros de M e N: ");
    scanf("%d%d", &m,&n);
    int soma = somaIntervalo(m,n);
    printf("O valor da soma eh %d\n", soma);
}
