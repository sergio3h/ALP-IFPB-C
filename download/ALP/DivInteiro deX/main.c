#include <stdio.h>

int main() {
    int M, N, X;

    // Solicita ao usuário os valores de M, N e X
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    // Verifica se M é menor ou igual a N
    if (M > N) {
        printf("M deve ser menor ou igual a N.\n");
        return 1; // Saída de erro
    }

    // Exibe os divisores exatos de X no intervalo [M, N]
    printf("Os divisores exatos de %d no intervalo [%d, %d] são:\n", X, M, N);

    for (int i = M; i <= N; i++) {
        if (X % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n, x;
    printf("Digite o valor de M ");
    scanf("%d",&m);
    printf("Digite o valor N ");
    scanf("%d", &n);
    printf("Digite um divisor X ");
    scanf("%d", &x);
    if(m>n){
        printf("Valores errados");
    }
    for(int k=m;k<=n;k++){
        if(x%k==0){
            printf("%d", k);
        }
    }
    return 0;
}
*/
