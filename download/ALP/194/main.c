#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 10
#define NUM_ALVOS 20
#define NUM_TENTATIVAS 20

// Função para inicializar o tabuleiro e posicionar os alvos aleatoriamente
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
        } while (tabuleiro[linha][coluna] == 1); // Garante que não haja alvo na mesma posição
        tabuleiro[linha][coluna] = 1; // Marca a posição do alvo
    }
}

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf(" - "); // Mostra os alvos escondidos
            } else {
                printf(" X "); // Mostra as posições tentadas pelo jogador
            }
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int tentativas = 0;
    int pontos = 0;

    srand(time(NULL)); // Inicializa a semente para geração de números aleatórios

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
                printf("Posição inválida! Tente novamente.\n");
                continue;
            }

            if (tabuleiro[linha][coluna] == 1) {
                printf("Você acertou um alvo!\n");
                pontos++;
            } else {
                printf("Você errou.\n");
            }

            tabuleiro[linha][coluna] = -1; // Marca a posição tentada pelo jogador

            tentativas++;
            imprimirTabuleiro(tabuleiro);
        }

        printf("\nFim da partida!\n");
        printf("Pontuação: %d\n", pontos);

        printf("Deseja iniciar uma nova partida? (1 para Sim, 0 para Não): ");
        scanf("%d", &tentativas);

        if (tentativas) {
            tentativas = 0; // Reinicia o número de tentativas
            pontos = 0;
        }

    } while (tentativas);

    printf("Obrigado por jogar! Até mais.\n");

    return 0;
}
