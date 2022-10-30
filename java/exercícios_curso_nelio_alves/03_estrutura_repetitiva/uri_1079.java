/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste
de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes
conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem
peso 5.
*/

import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		System.out.println("Quantidade de testes?:");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for (int i = 0; i < num; i++) {
			double val1 = sc.nextDouble() * 2;
			double val2 = sc.nextDouble() * 3;
			double val3 = sc.nextDouble() * 5;
			double resul = (val1 + val2 + val3) / 10;
			System.out.printf("%.2f%n", resul);
		}
		sc.close();
	}
}