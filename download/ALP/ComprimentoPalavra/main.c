#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
    char nome[20];
    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Seu nome e: %s", nome);
    return 0;
}
*/

int main(){
    char nome[20];
    printf("Informe seu nome: ");
    gets(nome);
    int numero = strlen(nome);
    //função conta espaços em branco como caractere

    printf("Palavra %s tem %d caracteres", nome,  numero);

    return 0;
}
