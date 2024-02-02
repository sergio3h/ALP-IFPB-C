#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max = 10;
/*Escreva um programa em C que leia um valor do tipo string e dois caracteres c1
e c2. Depois disso, o programa deve modificar a string informada pelo usu�rio,
substituindo todas as ocorr�ncias do caractere c1 pelo caractere c2. A
modifica��o da string deve ser feita por meio de um subprograma e a
impress�o da string modificada deve ocorrer fora do subprograma
respons�vel por fazer a modifica��o. O programa deve imprimir o valor da
string antes e ap�s a modifica��o*/

void subtituir(char texto[],char c1,char c2,int tamanho){
    int k;
    for(k=0;k<tamanho;k++){
        if(texto[k]==c1){
            texto[k]=c2;
        }
    }
}

void main(){
    char texto[10],c1,c2;
    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(texto);

    int tamanho = strlen(texto);
    printf("Digite C1: ");
    fflush(stdin);
    scanf("%c",&c1);

    printf("Digite C2: ");
    fflush(stdin);
    scanf("%c",&c2);
    int k;
    printf("Antes: \n\n");
    for(k=0;k<tamanho;k++){
        printf("%c",texto[k]);
    }
    printf("\nDepois: \n\n");
    subtituir(texto,c1,c2,tamanho);
    for(k=0;k<tamanho;k++){
        printf("%c",texto[k]);
    }

}
