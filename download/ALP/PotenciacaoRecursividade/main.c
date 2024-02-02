#include <stdio.h>

int potenciacao(int base,int expoente){
    if(expoente==0 || base==1){
        return 1;
    }
    if(expoente==1){
        return base;
    }
    if(base==0){
        return 0;
    }
    return base * potenciacao(base, expoente-1);
}

void main()
{
    int base,expoente;
    printf("Informe o valor da base e do expoente: ");
    scanf("%d %d", &base,&expoente);
    if(base==0 && expoente==0){
        printf("Operacao invalida");
    }
    else{
        int potencia = potenciacao(base,expoente);
        printf("O valor da potenciacao eh %d", potencia);
    }
}
