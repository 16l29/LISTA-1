9. Soma de dois números

/* 
1.Declarar variavel A
2.Declarar variavel B
3.Declarar variavel SOMA
4.Atribuir variavel A
5.Atribuir variavel B
6.Atribuir (A + B) em SOMA
7.Exibir SOMA
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, SOMA;
    
    printf("1° número: ");
    scanf("%f", &A);

    printf("2° número: ");
    scanf("%f", &B);

    SOMA = (A + B);

    printf("Soma = %.3f", SOMA);

    return 0;
}