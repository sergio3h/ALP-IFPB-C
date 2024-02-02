#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[30];
    int k;
    printf("Informe uma palavra: ");
    gets(palavra);

    printf("Informe um numero inteiro: ");
    scanf("%d", &k);

    int total = strlen(palavra);
    char kesima = palavra[k-1];

    printf("A palavra informada foi %s, a k-esima letra eh %c", palavra, kesima);

    return 0;
}
