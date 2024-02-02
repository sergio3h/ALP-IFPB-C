#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n, cont, k, c, vet;
    printf("Digite o valor de M");
    scanf("%d", &m);
    printf("Digite o valor de N");
    scanf("%d", &n);
    vet = 0;
    cont = 0;
    for(c=m;c<=n;c++){
        for(k=1;k<=n;k++){
            if(m%k==0){
                cont++;
            }
        }
        if(cont ==2){
            vet = c;
            printf("%d",vet);
        }
    }
    return 0;
}

/*int n, k, cont = 0;
    printf("Digite um numero para saber se e primo");
    scanf("%d", &n);
    for(k=1;k<=n;k++){
        if(n%k==0){
            cont++;
            printf("%d \n", k);
        }
    }
    if(cont==2){
        printf("E primo");
    }
*/
