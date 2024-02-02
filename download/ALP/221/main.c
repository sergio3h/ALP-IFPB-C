#include <stdio.h>
#include <stdlib.h>

int reverso(int n){
    int unidade = n%10;
    int centena = n / 100;
    int dezena = (n/10)%10;
    return unidade * 100 + centena + dezena * 10;
}

void main()
{
    int n;
    printf("Digite o numero de 3 digitos: ");
    scanf("%d",&n);
    int revers=reverso( n);
    printf("O reverso do numero e %d",revers);
}
