#include <stdio.h>
#include <stdlib.h>
const float bit = 8000;
const float byte = 1000;
const float mb = 0.001;
const float gb = 0.000001;
int main()
{
    float kb;
    printf("Digite a sua memoria em KB: ");
    scanf("%f", &kb);

    float kbit = bit * kb;
    float kbyte = byte * kb;
    float kmb = mb * kb;
    float kgb = gb * kb;

    printf("O valor em bits e: %.2f\n", kbit);
    printf("O valor em bytes e: %.2f\n", kbyte);
    printf("O valor em MegaB e: %f\n", kmb);
    printf("O valor em GigaB e: %f\n", kgb);

    return 0;
}
