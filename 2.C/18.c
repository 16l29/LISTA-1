/* 18. Informar se um número inteiro está ou não dentro de um intervalo de 2 número digitado */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int NUM, INTERVALO1, INTERVALO2;

    printf("Número: ");
    scanf("%d", &NUM);
    printf("Primeiro intervalo: ");
    scanf("%d", &INTERVALO1);
    printf("Segundo intervalo: ");
    scanf("%d", &INTERVALO2);

    if (NUM >= INTERVALO1 && NUM <= INTERVALO2){
        printf("%d está dentro do intervalo", NUM);
    }else{
        printf("%d não está no intervalo", NUM);
    }
}