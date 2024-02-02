#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    if(n==1 || n ==0){
        return 1;
    }
    return n * fatorial(n-1);

}
void main()
{
    int n;
    printf("Informe o numero de N: ");
    scanf("%d", &n);
    int ValFatorial = fatorial(n);
    printf("O valor do fatorial eh %d\n", ValFatorial);
}
