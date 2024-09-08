05. Construa um algoritmo para pagamento de comiss�o de vendedores de pe�as, levando-se em
considera��o que sua comiss�o ser� de 5% de total da venda.

/*
1.Declarar vari�vel valorvendido
2.Declarar vari�vel comiss�o
3.Declarar constante taxa com valor 0.05
4.Exibir mensagem "R$ em vendas?
5.Atribuir o valor em VALORVENDIDO
6.Atribuir (VALORVENDIDO * TAXA) em comiss�o
7.Exibir comiss�o
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float VALORVENDIDO, COMISSAO;
    const float TAXA = 0.05;

    printf("R$ em vendas? ");
    scanf("%f", &VALORVENDIDO);

    COMISSAO = (VALORVENDIDO * TAXA);

    printf("Comiss�o: R$%.2f\n", COMISSAO);

    return 0;
}