#include <stdio.h>
#include <stdlib.h>

const int max = 10;

int contaOcorrencias(int vet[], int n, int x) {
  // Se N for maior ou igual a 10, então o número X não aparece no vetor
  if (n >= max) {
    return 0;
  }

  // Se o número X for igual ao elemento na posição N, então incrementa o contador
  if (vet[n] == x) {
    // Incrementa o contador e chama o subprograma recursivamente para a próxima posição
    return 1 + contaOcorrencias(vet, n + 1, x);
  }

  // Caso contrário, chama o subprograma recursivamente para a próxima posição
  return contaOcorrencias(vet, n + 1, x);
}

void main() {
  int n, vet[max], k, x;

  // Preenche o vetor com números
  for (k = 0; k < max; k++) {
    printf("Preencha o vetor na posição %d", k + 1);
    scanf("%d", &vet[k]);
  }

  // Solicita o valor de N
  printf("Digite N(entre 1 e 10): ");
  scanf("%d", &n);

  // Solicita o valor de X
  printf("Digite X: ");
  scanf("%d", &x);

  // Chama o subprograma para contar as ocorrências de X
  int ocorrencias = contaOcorrencias(vet, n, x);

  // Imprime o resultado
  printf("O número %d aparece %d vezes no vetor a partir da posição %d.\n", x, ocorrencias, n);
}
