#include <stdio.h>
#include <stdlib.h>
/*Em um determinado concurso p�blico, para cada quest�o que um candidato acerta
ele ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
subprograma, que deve receber como entrada o n�mero de quest�es certas, o
n�mero de quest�es erradas e o n�mero de quest�es em branco.*/


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
