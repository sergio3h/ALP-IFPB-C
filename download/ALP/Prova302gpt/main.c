#include <stdio.h>

#define MAX_LENGTH 100

void substituirCaracteres(char string[], char c1, char c2) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == c1) {
            string[i] = c2;
        }
        i++;
    }
}

int main() {
    char texto[MAX_LENGTH];
    char c1, c2;

    // Leitura do texto e dos caracteres
    printf("Digite o texto: ");
    fgets(texto, MAX_LENGTH, stdin);

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &c1);

    printf("Digite o caractere de substituição: ");
    scanf(" %c", &c2);

    // Remover a quebra de linha (\n) do final da string lida por fgets
    int len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    // Imprime a string original
    printf("String original: %s\n", texto);

    //
