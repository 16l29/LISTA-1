05. Construa um algoritmo para pagamento de comissão de vendedores de peças, levando-se em
consideração que sua comissão será de 5% de total da venda.

/*
1.Declarar variável valorvendido
2.Declarar variável comissão
3.Declarar constante taxa com valor 0.05
4.Exibir mensagem "R$ em vendas?
5.Atribuir o valor em VALORVENDIDO
6.Atribuir (VALORVENDIDO * TAXA) em comissão
7.Exibir comissão
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

    printf("Comissão: R$%.2f\n", COMISSAO);

    return 0;
}