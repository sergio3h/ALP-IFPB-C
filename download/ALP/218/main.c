#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um valor em segundos e converta para a forma X
horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
e 10 segundos. O programa deve ter: um subprograma para calcular o valor das
horas, um subprograma para calcular o valor dos , um subprograma para calcular o
valor dos segundos e um subprograma para imprimir o resultado final.
*/
int horas(int seg){
    if(seg<3600){
        return 0;
    }
    return seg / 3600;
}

int minutos(int seg){
    if(seg<60){
        return 0;
    }
    return (seg % 3600) / 60;
}

int segundos(int seg){
    if(seg<1){
        return 0 ;
    }
    return(seg % 3600) % 60;
}


void main()
{
    int seg;
    printf("Digite m valor em Segundos: ");
    scanf("%d", &seg);

    int hr = horas(seg);
    int min = minutos(seg);
    int se = segundos(seg);

    printf("%d horas: %d minutos :%d segundos",hr,min,se);
}
