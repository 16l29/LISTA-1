/* 18. Informar se um n�mero inteiro est� ou n�o dentro de um intervalo de 2 n�mero digitado */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int NUM, INTERVALO1, INTERVALO2;

    printf("N�mero: ");
    scanf("%d", &NUM);
    printf("Primeiro intervalo: ");
    scanf("%d", &INTERVALO1);
    printf("Segundo intervalo: ");
    scanf("%d", &INTERVALO2);

    if (NUM >= INTERVALO1 && NUM <= INTERVALO2){
        printf("%d est� dentro do intervalo", NUM);
    }else{
        printf("%d n�o est� no intervalo", NUM);
    }
}