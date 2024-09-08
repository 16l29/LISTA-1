/* Escreva um programa que leia 10 números e:
a. Escreva o menor valor lido e o maior valor lido
b. Some-os.
c. Imprima sua média */

import java.util.Scanner;

public class J34 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int CUSTOM;

        System.out.print("Quantos números? ");
        CUSTOM = leitor.nextInt();

        int[] ENTRADA = new int[CUSTOM];
        float MEDIA;
        int SOMA = 0, i;
        int TAMANHO = ENTRADA.length;

        for (i = 0; i < CUSTOM; i++) {
            System.out.printf("%d.Número: ", i + 1);
            ENTRADA[i] = leitor.nextInt();
            SOMA += ENTRADA[i];
        }

        MEDIA = (float) SOMA / TAMANHO;

        System.out.printf("Soma: %d\n", SOMA);
        System.out.printf("Media: %.2f\n", MEDIA);
    }
}