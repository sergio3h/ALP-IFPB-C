#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 10
#define NUM_ALVOS 20
#define NUM_TENTATIVAS 20

// Fun��o para inicializar o tabuleiro e posicionar os alvos aleatoriamente
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com zeros
        }
    }

    // Posiciona os alvos aleatoriamente
    for (int k = 0; k < NUM_ALVOS; k++) {
        int linha, coluna;
        do {
            linha = rand() % TAMANHO_TABULEIRO;
            coluna = rand() % TAMANHO_TABULEIRO;
        } while (tabuleiro[linha][coluna] == 1); // Garante que n�o haja alvo na mesma posi��o
        tabuleiro[linha][coluna] = 1; // Marca a posi��o do alvo
    }
}

// Fun��o para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf(" - "); // Mostra os alvos escondidos
            } else {
                printf(" X "); // Mostra as posi��es tentadas pelo jogador
            }
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int tentativas = 0;
    int pontos = 0;

    srand(time(NULL)); // Inicializa a semente para gera��o de n�meros aleat�rios

    do {
        inicializarTabuleiro(tabuleiro);

        printf("\nIniciando uma nova partida de Batalha Naval!\n");
        printf("Tente acertar os alvos no tabuleiro.\n");

        while (tentativas < NUM_TENTATIVAS) {
            int linha, coluna;

            printf("\nTentativa %d de %d\n", tentativas + 1, NUM_TENTATIVAS);
            printf("Digite a linha (0 a 9): ");
            scanf("%d", &linha);

            printf("Digite a coluna (0 a 9): ");
            scanf("%d", &coluna);

            if (linha < 0 || linha >= TAMANHO_TABULEIRO || coluna < 0 || coluna >= TAMANHO_TABULEIRO) {
                printf("Posi��o inv�lida! Tente novamente.\n");
                continue;
            }

            if (tabuleiro[linha][coluna] == 1) {
                printf("Voc� acertou um alvo!\n");
                pontos++;
            } else {
                printf("Voc� errou.\n");
            }

            tabuleiro[linha][coluna] = -1; // Marca a posi��o tentada pelo jogador

            tentativas++;
            imprimirTabuleiro(tabuleiro);
        }

        printf("\nFim da partida!\n");
        printf("Pontua��o: %d\n", pontos);

        printf("Deseja iniciar uma nova partida? (1 para Sim, 0 para N�o): ");
        scanf("%d", &tentativas);

        if (tentativas) {
            tentativas = 0; // Reinicia o n�mero de tentativas
            pontos = 0;
        }

    } while (tentativas);

    printf("Obrigado por jogar! At� mais.\n");

    return 0;
}
