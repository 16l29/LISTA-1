6. Fa�a um algoritmo para saque de dinheiro

/*
1.Declarar vari�vel SALDO
2.Declarar vari�vel SAQUE
3.Declarar vari�vel SALDO NOVO
4.Atribuir valor ao SALDO
5.Atribuir valor ao SAQUE
6.Verificar se SAQUE > SALDO
7.Se SIM exibir: "Saldo insuficiente"
8.Se N�O continuar
9.Calcular SALDOO NOVO = SALDO - SAQUE
10.Atualizar SALDO com SALDO NOVO
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float SALDO, SAQUE, SALDONOVO;

    printf("saldo dispon�vel: R$");
    scanf("%f", &SALDO);

    printf("valor do saque: R$");
    scanf("%f", &SAQUE);

    if (SAQUE > SALDO){
        printf("Saldo insuficiente.\n");
    } else{
        SALDONOVO = SALDO - SAQUE;
        SALDO = SALDONOVO;
        printf("Saque realizado\n");
        printf("Saldo atual: R$ %.2f\n", SALDO);
    }

    return 0;
}
