#include <stdio.h>
#include <stdlib.h>
/*numeor n e um k, determina kesimo algorismo n */
int ksimo(int n,int k){
    if(k==1){
        return n%10;
    }
    if(n>10){
        return ksimo(n/10,k-1);
    }
}

void main()
{
    int n,k;
    printf("Digite N: ");
    scanf("%d",&n);
    printf("Digite K: ");
    scanf("%d",&k);
    int soma = ksimo(n,k);
    printf("%d e a soma",soma);

}
