#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituir(char string[],char c1,char c2,int tamanho){
    int k;
    for(k=0;k<tamanho;k++){
        if(string[k]==c1){
            string[k]=c2;
        }
    }
}

void main()
{
    char c1,c2,texto[50];
    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(texto);
    int tamanho=strlen(texto);
    printf("Informe um caractere da palavra: ");
    fflush(stdin);
    scanf("%c",&c1);
    printf("Informe um caractere: ");
    fflush(stdin);
    scanf("%c",&c2);
    int k;
    printf("Original: \n");
    for(k=0;k<tamanho;k++){
        printf("%c",texto[k]);
    }
    substituir(texto,c1,c2,tamanho);

    printf("\nModificada: \n");

    for(k=0;k<tamanho;k++){
        printf("%c",texto[k]);
    }
}
