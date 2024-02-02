#include <stdio.h>
#include <stdlib.h>

void multiplo(int m,int n){
    if(n%m==0){
        printf("E multiplo");
    }
    else{
        printf("Nao e multiplo");
    }
}


void main()
{
    int m,n;
    printf("Digite M e N: ");
    scanf("%d %d",&m,&n);
    multiplo(m,n);
}
