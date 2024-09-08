/* Informar se um número inteiro está ou não dentro de um intervalo de 2 número digitado */

import java.util.Scanner;

public class J36 {
    public static void main(String[] args){
        Scanner leitor = new Scanner(System.in);

        int NUM, INTERVALO1, INTERVALO2;

        System.out.print("Número: ");
        NUM = leitor.nextInt();
        System.out.print("Primeiro intervalo: ");
        INTERVALO1 = leitor.nextInt();
        System.out.print("Segundo intervalo: ");
        INTERVALO2 = leitor.nextInt();

        if (NUM >= INTERVALO1 && NUM <= INTERVALO2){
            System.out.print("Número dentro do intervalo");
        }else{
            System.out.print("Número fora do intervalo");
        }
    }
}