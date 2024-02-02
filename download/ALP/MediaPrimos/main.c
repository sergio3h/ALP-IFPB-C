#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,k,cont = 0;
    int primo=0;
    int priCont = 0;
    printf("Digite o valor de M");
    scanf("%d",&m);
    printf("Digite o valor de N");
    scanf("%d",&n);

    if(m>n){
        printf("Programa Inválido");
    }

    for(k=m;k<=n;k++){
        if(n%k==0){
            cont++;
            if(cont==2){
                priCont++;
                primo = primo + k;
            }
        }
    }
    int medP = primo/priCont;
    printf("Amédia de números primos e %d", medP);
    return 0;
}
