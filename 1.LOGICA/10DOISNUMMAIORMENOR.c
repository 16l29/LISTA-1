10. Escreva um programa que leia 2 n�meros e escreva o menor valor lido e o maior valor lido

/*
1.Declarar vari�vel A
2.Declarar vari�vel B
3.Declarar vari�vel MAIOR
4.Declarar vari�vel MENOR
5.Atribuir valor a A
6.Atribuir valor a B
7.Se A > B, ent�o MAIOR = A
8.Se B > A, ent�o MAIOR = B
9.Se A < B, ent�o MENOR = A
10.Se B < A, ent�o MENOR = B
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

    printf("1� N�mero: ");
    scanf("%f", &NUMERO1);

    printf("2� N�mero: ");
    scanf("%f", &NUMERO2);

    float maior = MAIOR(NUMERO1, NUMERO2);
    float menor = MENOR(NUMERO1, NUMERO2);


    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}