#include <stdio.h>
#include <math.h>

int main() {
    float distancia;  // Distância em metros
    float velocidade; // Velocidade em metros por segundo
    float aceleracao; // Aceleração em metros por segundo ao quadrado

    // Solicita ao usuário as informações
    printf("Digite a distância até o próximo semáforo (metros): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade permitida na via (m/s): ");
    scanf("%f", &velocidade);

    printf("Digite a aceleração típica dos carros (m/s^2): ");
    scanf("%f", &aceleracao);

    // Calcula o tempo necessário para atingir a velocidade permitida
    float tempo_atingir_velocidade = velocidade / aceleracao;

    // Calcula o tempo necessário para percorrer a distância com velocidade constante
    float tempo_percorrer_distancia = distancia / velocidade;

    // Calcula o tempo de abertura do semáforo antes da chegada do veículo
    float tempo_abertura_semaforo = tempo_percorrer_distancia - tempo_atingir_velocidade;

    // Exibe o resultado
    printf("O semáforo deve abrir %.2f segundos antes da chegada do veículo.\n", tempo_abertura_semaforo);

    return 0;
}
