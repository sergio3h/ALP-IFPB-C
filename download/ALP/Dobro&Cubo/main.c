#include <stdio.h>
#include <math.h>
const int max = 10;

int dobro(int n){
    return 2 * n;
}

int cubo(int n){
    return pow(n,3);
}

void main(){
    int k,n;
    for(k=1;k<=max;k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);
        int valDobro = dobro(n);
        int valCubo = cubo(n);
        printf("O dobro eh %d e o cubo eh %d\n", valDobro, valCubo);
    }
}
