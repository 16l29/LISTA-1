10. Escreva um programa que leia 2 números e escreva o menor valor lido e o maior valor lido

/*
1.Declarar variável A
2.Declarar variável B
3.Declarar variável MAIOR
4.Declarar variável MENOR
5.Atribuir valor a A
6.Atribuir valor a B
7.Se A > B, então MAIOR = A
8.Se B > A, então MAIOR = B
9.Se A < B, então MENOR = A
10.Se B < A, então MENOR = B
11.Exibir MAIOR
12.Exibir MENOR
*/

#include <stdio.h>
#include <locale.h>

float MAIOR(float NUMERO1, float NUMERO2){
    return (NUMERO1 > NUMERO2) ? NUMERO1 : NUMERO2;
}

float MENOR(float NUMERO1, float NUMERO2){
    return (NUMERO1 < NUMERO2) ? NUMERO1 : NUMERO2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float NUMERO1, NUMERO2;

    printf("1° Número: ");
    scanf("%f", &NUMERO1);

    printf("2° Número: ");
    scanf("%f", &NUMERO2);

    float maior = MAIOR(NUMERO1, NUMERO2);
    float menor = MENOR(NUMERO1, NUMERO2);


    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}