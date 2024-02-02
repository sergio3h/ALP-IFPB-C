#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento.
*/
float area(float raio){
    return M_PI * pow(raio,2);
}

float comprimento(float raio){
    return 2 * M_PI * raio;
}
void main()
{
    float raio;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    float valArea = area(raio);

    float valComprimento = comprimento(raio);

    printf("O valor da area eh %.2f e o comprimento e %.2f", valArea, valComprimento);

}
