/* 16. Escreva um programa que leia 10 n�meros e:
a. Escreva o MENOR valor lido e o MAIOR valor lido
b. Some-os.
c. Imprima sua m�dia */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int CUSTOM, i, SOMA = 0, ENTRADA[CUSTOM];
    float MEDIA;

    printf("Quantos n�meros? ");
    scanf("%d", &CUSTOM);

    for (i = 0; i < CUSTOM; i++)
    {
        printf("%d.N�mero: ", i + 1);
        scanf("%d", &ENTRADA[i]);
        SOMA += ENTRADA[i];
    }

    MEDIA = (float)SOMA / CUSTOM;

    printf("SOMA: %d\n", SOMA);
    printf("M�DIA: %.2f\n", MEDIA);
}