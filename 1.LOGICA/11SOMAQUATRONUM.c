11. Fa�a um programa que pe�a ao usu�rio para digitar 4 valores e some-os

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
    printf("1� n�mero: ");
    scanf("%f", &A);

    printf("2� n�mero: ");
    scanf("%f", &B);
    
    printf("3� n�mero: ");
    scanf("%f", &C);

    printf("4� n�mero: ");
    scanf("%f", &D);

    SOMA = (A + B + C + D);

    printf("Resultado = %.3f", SOMA);

    return 0;
}