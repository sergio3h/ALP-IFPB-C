#include <stdio.h>

int main() {
    char letra_original, letra_substituta, outra_letra_original;

    // Solicita ao usuário as letras originais e a letra substituta
    printf("Digite a letra original: ");
    scanf(" %c", &letra_original);

    printf("Digite a letra substituta: ");
    scanf(" %c", &letra_substituta);

    printf("Digite outra letra original: ");
    scanf(" %c", &outra_letra_original);

    // Verifica se as letras originais são letras minúsculas
    if (letra_original >= 'a' && letra_original <= 'z' &&
        outra_letra_original >= 'a' && outra_letra_original <= 'z') {

        // Calcula o deslocamento necessário
        int deslocamento = letra_substituta - letra_original;

        // Aplica o deslocamento para encontrar a letra substituta da outra letra original
        char outra_letra_substituta = outra_letra_original + deslocamento;

        // Verifica se a letra substituta está além do 'z' e ajusta o deslocamento
        if (outra_letra_substituta > 'z') {
            outra_letra_substituta -= 26; // 26 letras no alfabeto
        }

        // Exibe a letra substituta
        printf("A letra substituta da outra letra original é: %c\n", outra_letra_substituta);
    } else {
        printf("Por favor, insira letras minúsculas válidas.\n");
    }

    return 0;
}
