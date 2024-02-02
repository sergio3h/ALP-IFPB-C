#include <stdio.h>
#include <stdlib.h>

int main()
{
    float MpS;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &MpS);

    float KpH = MpS * 3.6;

    printf("A velocidade em Km/H eh %.1f", KpH);
    return 0;
}
