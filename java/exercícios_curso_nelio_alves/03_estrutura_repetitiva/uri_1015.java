/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema
cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo
menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).
*/

import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		System.out.println("Entre com as coordenadas X e Y: ");
		double x, y;
		Scanner sc = new Scanner(System.in);
		x = sc.nextDouble();
		y = sc.nextDouble();

		while (x != 0 && y != 0) {
			if (x < 0 && y < 0) {
				System.out.println("Quadrante 3");
			} else if (x > 0 && y < 0) {
				System.out.println("Quadrante 4");
			} else if (x < 0 && y > 0) {
				System.out.println("Quadrante 2");
			} else {
				System.out.println("Quadrante 1");
			}
			System.out.println("Entre com as coordenadas X e Y: ");
			x = sc.nextDouble();
			y = sc.nextDouble();
		}
		sc.close();
	}
}