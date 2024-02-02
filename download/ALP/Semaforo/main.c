#include <stdio.h>
#include <math.h>

int main() {
    float distancia;  // Dist�ncia em metros
    float velocidade; // Velocidade em metros por segundo
    float aceleracao; // Acelera��o em metros por segundo ao quadrado

    // Solicita ao usu�rio as informa��es
    printf("Digite a dist�ncia at� o pr�ximo sem�foro (metros): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade permitida na via (m/s): ");
    scanf("%f", &velocidade);

    printf("Digite a acelera��o t�pica dos carros (m/s^2): ");
    scanf("%f", &aceleracao);

    // Calcula o tempo necess�rio para atingir a velocidade permitida
    float tempo_atingir_velocidade = velocidade / aceleracao;

    // Calcula o tempo necess�rio para percorrer a dist�ncia com velocidade constante
    float tempo_percorrer_distancia = distancia / velocidade;

    // Calcula o tempo de abertura do sem�foro antes da chegada do ve�culo
    float tempo_abertura_semaforo = tempo_percorrer_distancia - tempo_atingir_velocidade;

    // Exibe o resultado
    printf("O sem�foro deve abrir %.2f segundos antes da chegada do ve�culo.\n", tempo_abertura_semaforo);

    return 0;
}
