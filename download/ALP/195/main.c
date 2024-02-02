#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 10
#define NUM_BOMBAS 20

// Função para inicializar o tabuleiro e posicionar as bombas aleatoriamente
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com zeros
        }
    }

    // Posiciona as bombas aleatoriamente
    for (int k = 0; k < NUM_BOMBAS; k++) {
        int linha, coluna;
        do {
            linha = rand() % TAMANHO_TABULEIRO;
            coluna = rand() % TAMANHO_TABULEIRO;
        } while (tabuleiro[linha][coluna] == -1); // Garante que não haja bomba na mesma posição
        tabuleiro[linha][coluna] = -1; // Marca a posição da bomba
    }
}

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int mostrarBombas) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == -1 && mostrarBombas) {
                printf(" * "); // Mostra as bombas se a opção estiver ativada
            } else if (tabuleiro[i][j] == -2) {
                printf(" - "); // Mostra as células já descobertas
            } else {
                printf(" # "); // Mostra as células não descobertas
            }
        }
        printf("\n");
    }
}

// Função para contar bombas ao redor de uma posição
int contarBombasAoRedor(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    int contadorBombas = 0;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int novaLinha = linha + i;
            int novaColuna = coluna + j;

            // Verifica se a nova posição está dentro dos limites do tabuleiro
            if (novaLinha >= 0 && novaLinha < TAMANHO_TABULEIRO && novaColuna >= 0 && novaColuna < TAMANHO_TABULEIRO) {
                if (tabuleiro[novaLinha][novaColuna] == -1) {
                    contadorBombas++;
                }
            }
        }
    }

    return contadorBombas;
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int mostrarBombas = 0;

    srand(time(NULL)); // Inicializa a semente para geração de números aleatórios

    do {
        inicializarTabuleiro(tabuleiro);

        int jogadasRestantes = TAMANHO_TABULEIRO * TAMANHO_TABULEIRO - NUM_BOMBAS;
        int linha, coluna;

        printf("\nJogo de Campo Minado!\n");
        printf("Digite a linha (0 a 9): ");
        scanf("%d", &linha);

        printf("Digite a coluna (0 a 9): ");
        scanf("%d", &coluna);

        while (tabuleiro[linha][coluna] != -1 && jogadasRestantes > 0) {
            if (tabuleiro[linha][coluna] != -2) {
                int bombasAoRedor = contarBombasAoRedor(tabuleiro, linha, coluna);
                tabuleiro[linha][coluna] = -2; // Marca a célula como descoberta

                printf("\nCélula descoberta! Bombas ao redor: %d\n", bombasAoRedor);
                jogadasRestantes--;

                // Se não há bombas ao redor, descobre automaticamente as células adjacentes
                if (bombasAoRedor == 0) {
                    for (int i = -1; i <= 1; i++) {
                        for (int j = -1; j <= 1; j++) {
                            int novaLinha = linha + i;
                            int novaColuna = coluna + j;

                            // Verifica se a nova posição está dentro dos limites do tabuleiro
                            if (novaLinha >= 0 && novaLinha < TAMANHO_TABULEIRO && novaColuna >= 0 && novaColuna < TAMANHO_TABULEIRO) {
                                if (tabuleiro[novaLinha][novaColuna] != -2) {
                                    tabuleiro[novaLinha][novaColuna] = -2; // Marca a célula como descoberta
                                    jogadasRestantes--;
                                }
                            }
                        }
                    }
                }

                // Verifica se o jogador ganhou
                if (jogadasRestantes == 0) {
                    printf("\nParabéns! Você ganhou!\n");
                    imprimirTabuleiro(tabuleiro, 1); // Mostra as bombas
                    break;
                }
            } else {
                printf("\nCélula já descoberta! Escolha outra posição.\n");
            }

            printf("\nDigite a linha (0 a 9): ");
            scanf("%d", &linha);

            printf("Digite a coluna (0 a 9): ");
            scanf("%d", &coluna);
        }

        // Verifica se o jogador perdeu
        if (tabuleiro[linha][coluna] == -1) {
            printf("\nBoom! Você acertou uma bomba. Fim de jogo!\n");
            imprimirTabuleiro(tabuleiro, 1); // Mostra as bombas
        }

        printf("\nDeseja jogar novamente? (1 para Sim, 0 para Não): ");
        scanf("%d", &mostrarBombas);

    } while (mostrarBombas);

    printf("\nObrigado por jogar! Até mais.\n");

    return 0;
}
