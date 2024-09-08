11. Faça um programa que peça ao usuário para digitar 4 valores e some-os

/*
1.Declarar variavel A
2.Declarar variavel B
3.Declarar variavel C
4.Declarar variavel D
5.Declarar variavel SOMA
6.Atribuir variavel A
7.Atribuir variavel B
8.Atribuir variavel C
9.Atribuir variavel D
10.Atribuir (A + B + C + D) em SOMA
11.Exibir SOMA
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C, D, SOMA;
    printf("1° número: ");
    scanf("%f", &A);

    printf("2° número: ");
    scanf("%f", &B);
    
    printf("3° número: ");
    scanf("%f", &C);

    printf("4° número: ");
    scanf("%f", &D);

    SOMA = (A + B + C + D);

    printf("Resultado = %.3f", SOMA);

    return 0;
}