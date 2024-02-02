#include <stdio.h>
#include <stdlib.h>
/*numeor n e um k, determina kesimo algorismo n */
int soma(int n){
    if(n<10){
        return n;
    }
    if(n>=10){
        return n%10 + soma(n/10);
    }
}

void main()
{
    int n,k;
    printf("Digite N: ");
    scanf("%d",&n);

    int som = soma(n);
    printf("%d e a soma",som);

}
