#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.
*/
const int max=5;
void main()
{
    int veta[max],vetb[max],vetc[max*2];
    int k,j,i;
    int estaVetC=0;

    for(k=0;k<max;k++){
        printf("Digite o vetor A com %d numeros: ",max-k);
        scanf("%d", &veta[k]);
    }

    for(j=0;j<max;j++){
        printf("Digite o vetor B com %d numeros: ",max-j);
        scanf("%d", &vetb[k]);
    }

    int indiceVetorC=0, numAtual;

    for(k=0;k<max;k++){
        numAtual=veta[k];

        for(j=0;j<indiceVetorC;j++){
            if(vetc[j]==numAtual){
                estaVetC=1;
                break;
            }
        }
    }
    if(!estaVetC){
        vetc[indiceVetorC++]=numAtual;
    }

    for(k=0;k<max;k++){
        int numAtual=vetb[k];
        int estaVetC=0;

        for(j=0;j<indiceVetorC;j++){
            if(vetc[j]==numAtual){
                estaVetC=1;
                break;
            }
        }
    }
    if(!estaVetC){
        vetc[indiceVetorC++]=numAtual;
    }

    printf("Os elementos presentes em pelo menos um dos vetores: \n");
    for(i=0;i<indiceVetorC;i++){
        printf("%d", vetc[i]);
    }
}
