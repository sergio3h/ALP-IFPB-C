#include <stdio.h>
#include <stdlib.h>

void binario(int n){
    if (n==0)
        printf("%d", n);
    else{
        binario(n/2);
        printf("%d", n % 2);
    }

}
int main(){
    int n;

    printf("Digite o valor decimal: ");
    scanf("%d", &n);

    binario(n);

    return 0;
}
