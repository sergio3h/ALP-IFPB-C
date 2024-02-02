#include <stdio.h>
#include <stdlib.h>
/*Em um determinado concurso público, para cada questão que um candidato acerta
ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final. A pontuação deve ser calculada através de um
subprograma, que deve receber como entrada o número de questões certas, o
número de questões erradas e o número de questões em branco.*/


int ContBranco(int branco){
    return branco;
}

int ContPontos(int ContAcerto,int ContErro){
    return ContAcerto - ContErro;
}

void main()
{
    int acerto,erro,branco;
    printf("Digite a quantidade de acertos: ");
    scanf("%d", &acerto);
    printf("Digite a quantidade de erros: ");
    scanf("%d", &erro);
    printf("Digite a quantidade de brancos: ");
    scanf("%d", &branco);

    int ContAcerto = acerto * 5;
    int ContErro = erro * 3;

    int pontos = ContPontos(ContAcerto,ContErro);
    printf("A quantidade de pontos que o usuario fez foi: %d",pontos);
}
