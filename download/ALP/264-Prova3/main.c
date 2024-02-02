#include <stdio.h>
#include <stdlib.h>

//Funçao para encontrar o menor divisor comum entre tres numeros
int menorDivisor(int n1,int n2,int n3){
    int fator=2;
    //Enquanto um dos numeros nao for divisivel pelo faotr, incrementa o fator +1
    while(n1%fator!=0 && n2%fator!=0 && n3%fator!=0){
        fator++;
    }
    return fator;
}

//Função para calcular o mmc de tres numeros
int mmc(int n1,int n2,int n3){
    //se todos os numeros são iguais a 1, o mmc e 1
    if(n1==1 && n2==1 && n3==1){
        return 1;
    }

    //divide os numeros pelo fator, se forem divisiveis
    int fator=menorDivisor(n1,n2,n3);
    if(n1%fator==0){
        n1=n1/fator;
    }
    if(n2%fator==0){
        n2=n2/fator;
    }
    if(n3%fator==0){
        n3=n3/fator;
    }
    //retorna o produto do faotr e do mmc dos numeros restantes
    return fator * mmc(n1,n2,n3);
}

void main()
{
    int n1,n2,n3;

    //le n1,n2,n3
    printf("Digite o valor de n1 & n2 & n3: ");
    scanf("%d %d %d", &n1,&n2,&n3);

    //chama a função mmc
    int resultado = mmc(n1,n2,n3);

    //imprime o resultado
    printf("O mmc eh %d",resultado);
}
