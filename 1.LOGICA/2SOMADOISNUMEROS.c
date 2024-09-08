02. Faça um algoritmo para somar dois números e multiplicar o resultado pelo primeiro número

/* 
1.Declarar variavel A
2.Declarar variavel B
3.Declarar variavel SOMA
4.Declarar variavel RESULTADO
5.Atribuir variavel A
6.Atribuir variavel B
7.Atribuir (A + B) em SOMA
8.Atribuir (SOMA * A)
9.Exibir RESULTADO
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, SOMA, RESULTADO;
    
    printf("1° número: ");
    scanf("%f", &A);

    printf("2° número: ");
    scanf("%f", &B);

    SOMA = (A + B);
    RESULTADO = SOMA * A;

    printf("Resultado = %.3f", RESULTADO);

    return 0;
}