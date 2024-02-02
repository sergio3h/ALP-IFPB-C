#include <stdio.h>
#include <stdlib.h>
const int max=5;
int main()
{
    /*Incompleto*!!!!*/
    int k,j,i;
    int vet[max], vet2[max];
    for(k=0;k<max;k++){
        printf("Digite %d numeros do primeiro vetor: ",max-k);
        scanf("%d", &vet[k]);
    }

    for(j=0;j<max;j++){
        printf("Digite %d numeros do segundo vetor: ",max-j);
        scanf("%d", &vet2[j]);
    }

    for(i=0;i<max;i++){
        if(vet[i] != vet2[i]){
            printf("%d \n", vet[i]);
        }
    }
    return 0;
}
