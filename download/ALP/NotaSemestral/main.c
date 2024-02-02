#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, nota4;

    printf("Digite as notas do primeiro bimestre");
    scanf("%f %f", &nota1, &nota2);

    float bimestre1 = (nota1 + nota2)/2;

    printf("Digite as notas do segundo bimestre");
    scanf("%f %f", &nota3, &nota4);

    float bimestre2 = (nota3 + nota4)/2;

    float semestre = (bimestre1 + bimestre2)/2;

    printf("A nota do semestre eh %.1f", semestre);
    return 0;
}
