#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 10

// Função para inicializar o tabuleiro e posicionar o tesouro aleatoriamente
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int *tesouroLinha, int *tesouroColuna) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com zeros
        }
    }

    // Posiciona o tesouro aleatoriamente
    *tesouroLinha = rand() % TAMANHO_TABULEIRO;
    *tesouroColuna = rand() % TAMANHO_TABULEIRO;
    tabuleiro[*tesouroLinha][*tesouroColuna] = 1; // Marca a posição do tesouro
}

// Função para imprimir o tabuleiro com a posição dos jogadores e do tesouro
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int jogador1Linha, int jogador1Coluna, int jogador2Linha, int jogador2Coluna, int tesouroLinha, int tesouroColuna) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (i == jogador1Linha && j == jogador1Coluna) {
                printf(" P "); // Mostra o jogador 1
            } else if (i == jogador2Linha && j == jogador2Coluna) {
                printf(" Q "); // Mostra o jogador 2
            } else if (i == tesouroLinha && j == tesouroColuna) {
                printf(" T "); // Mostra o tesouro
            } else {
                printf(" - "); // Mostra as células vazias
            }
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int jogador1Linha = 0, jogador1Coluna = 0;
    int jogador2Linha = TAMANHO_TABULEIRO - 1, jogador2Coluna = TAMANHO_TABULEIRO - 1;
    int tesouroLinha, tesouroColuna;

    srand(time(NULL)); // Inicializa a semente para geração de números aleatórios

    inicializarTabuleiro(tabuleiro, &tesouroLinha, &tesouroColuna);

    printf("\nJogo de Caça ao Tesouro!\n");
    imprimirTabuleiro(tabuleiro, jogador1Linha, jogador1Coluna, jogador2Linha, jogador2Coluna, tesouroLinha, tesouroColuna);

    while (1) {
        // Movimento do jogador 1
        printf("\nJogador 1: Digite o movimento (1 para cima, 2 para baixo, 3 para a esquerda, 4 para a direita): ");
        int movimento1;
        scanf("%d", &movimento1);

        switch (movimento1) {
            case 1:
                if (jogador1Linha > 0) {
                    jogador1Linha--;
                }
                break;
            case 2:
                if (jogador1Linha < TAMANHO_TABULEIRO - 1) {
                    jogador1Linha++;
                }
                break;
            case 3:
                if (jogador1Coluna > 0) {
                    jogador1Coluna--;
                }
                break;
            case 4:
                if (jogador1Coluna < TAMANHO_TABULEIRO - 1) {
                    jogador1Coluna++;
                }
                break;
            default:
                printf("Movimento inválido! Tente novamente.\n");
                continue;
        }

        // Movimento do jogador 2
        printf("\nJogador 2: Digite o movimento (1 para cima, 2 para baixo, 3 para a esquerda, 4 para a direita): ");
        int movimento2;
        scanf("%d", &movimento2);

        switch (movimento2) {
            case 1:
                if (jogador2Linha > 0) {
                    jogador2Linha--;
                }
                break;
            case 2:
                if (jogador2Linha < TAMANHO_TABULEIRO - 1) {
                    jogador2Linha++;
                }
                break;
            case 3:
                if (jogador2Coluna > 0) {
                    jogador2Coluna--;
                }
                break;
            case 4:
                if (jogador2Coluna < TAMANHO_TABULEIRO - 1) {
                    jogador2Coluna++;
                }
                break;
            default:
                printf("Movimento inválido! Tente novamente.\n");
                continue;
        }

        // Verifica se algum jogador encontrou o tesouro
        if (jogador1Linha == tesouroLinha && jogador1Coluna == tesouroColuna) {
            printf("\nJogador 1 encontrou o tesouro! Parabéns!\n");
            break;
        }

        if (jogador2Linha == tesouroLinha && jogador2Coluna == tesouroColuna) {
            printf("\nJogador 2 encontrou o tesouro! Parabéns!\n");
            break;
        }

        // Exibe o tabuleiro atualizado
        imprimirTabuleiro(tabuleiro, jogador1Linha, jogador1Coluna, jogador2Linha, jogador2Coluna, tesouroLinha, tesouroColuna);
    }

    printf("\nObrigado por jogar! Até mais.\n");

    return 0;
}
