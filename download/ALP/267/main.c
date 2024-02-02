#include <stdio.h>
#include <stdlib.h>

const int max = 10;

int contaOcorrencias(int vet[], int n, int x) {
  // Se N for maior ou igual a 10, ent�o o n�mero X n�o aparece no vetor
  if (n >= max) {
    return 0;
  }

  // Se o n�mero X for igual ao elemento na posi��o N, ent�o incrementa o contador
  if (vet[n] == x) {
    // Incrementa o contador e chama o subprograma recursivamente para a pr�xima posi��o
    return 1 + contaOcorrencias(vet, n + 1, x);
  }

  // Caso contr�rio, chama o subprograma recursivamente para a pr�xima posi��o
  return contaOcorrencias(vet, n + 1, x);
}

void main() {
  int n, vet[max], k, x;

  // Preenche o vetor com n�meros
  for (k = 0; k < max; k++) {
    printf("Preencha o vetor na posi��o %d", k + 1);
    scanf("%d", &vet[k]);
  }

  // Solicita o valor de N
  printf("Digite N(entre 1 e 10): ");
  scanf("%d", &n);

  // Solicita o valor de X
  printf("Digite X: ");
  scanf("%d", &x);

  // Chama o subprograma para contar as ocorr�ncias de X
  int ocorrencias = contaOcorrencias(vet, n, x);

  // Imprime o resultado
  printf("O n�mero %d aparece %d vezes no vetor a partir da posi��o %d.\n", x, ocorrencias, n);
}
