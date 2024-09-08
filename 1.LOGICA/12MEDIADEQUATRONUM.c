12. Fa�a um programa que leia 4 inteiros e imprima sua m�dia

/*
1.Declarar vari�vel NUMERO1
2.Declarar vari�vel NUMERO2
3.Declarar vari�vel NUMERO3
4.Declarar vari�vel NUMERO4
5.Declarar vari�vel SOMA
6.Declarar vari�vel MEDIA
7.Atribuir(NUMERO1+NUMERO2+NUMERO3+NUMERO4) em SOMA
8.Atribuir SOMA/4 em MEDIA
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int NUMERO1, NUMERO2, NUMERO3, NUMERO4, SOMA;
    float MEDIA;

    printf("1� n�mero: ");
    scanf("%d", &NUMERO1);

    printf("2� n�mero: ");
    scanf("%d", &NUMERO2);
    
    printf("3� n�mero: ");
    scanf("%d", &NUMERO3);
    
    printf("4� n�mero: ");
    scanf("%d", &NUMERO4);

    SOMA = (NUMERO1 + NUMERO2 + NUMERO3 + NUMERO4);
    MEDIA = (float)SOMA / 4;
    printf("M�dia: %.2f\n", MEDIA);

    return 0;
}
