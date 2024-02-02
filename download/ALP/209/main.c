#include <stdio.h>
#include <stdlib.h>
float ang3(float ang1,float ang2){
    return 180 - (ang1+ang2);
}

void main()
{
    float ang1,ang2;
    printf("Digite o valor de dois angulos internos de um triangulo: ");
    scanf("%f %f",&ang1,&ang2);

    float terceiro = ang3(ang1,ang2);

    printf("O valor do terceiro angulo eh %.2f", terceiro);
}
