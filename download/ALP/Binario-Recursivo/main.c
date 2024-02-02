#include <stdio.h>
#include <stdlib.h>
void binario(int n){
    //se n e 0 ou 1,imprime n
    if(n==0 || n==1){
        printf("%d",n);
    }
    //se n maior que 1
    else if(n>1){
        //divide o binario por 2 recursivamente
        binario(n/2);
        //imprime o numero do ultimo resulado ate a primeira divisao, recursivamente
        printf("%d",n%2);
    }

}
int main()
{
    int n;
    //ler n
    printf("Digite N: ");
    scanf("%d",&n);
    //ler procedimento binario
    binario(n);
}
