#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fruta1[20] = "abacaxi";
    char fruta2[20] = {'m','a','n','g','a'};
    printf("A fruta 1 eh %s e a fruta 2 eh %s",fruta1, fruta2);
    char fruta3[20];
    strcpy(fruta3,fruta1);
    printf("\nA fruta 3 eh %s", fruta3); //fruta3 recebe a variavel fruta1//

    char str1[20] = "amoreira";
    char str2[20];
    strncpy(str2, str1,4); // faz uma copia parcial das 4 primeiras caracteres da string str1//
    str2[4] = '\0';
    printf("\nCopiei a palavra %s",str2);

    char str12[20] = "bom dia";
    char str23[20] = " pessoal";
    strcat(str12, str23);
    printf("\nO valor da primeira string eh %s", str12);

    char strcmp1[20] = "casa";
    char strcmp2[20] = "papel";
    int resultado1= strcmp(strcmp1, strcmp2);
    int resultado = strcmp(strcmp2,strcmp1);
    printf("\n %compara2",resultado1);

    return 0;
}
