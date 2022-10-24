/*
Fazer um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B
*/
import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		System.out.println("Valor de A: ");
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		double c = sc.nextDouble();

		double resul1 = (a * c) / 2;
		double resul2 = Math.PI * Math.pow(c, 2);
		double resul3 = ((a + b) * c) / 2;
		double resul4 = Math.pow(b, 2);
		double resul5 = a * b;
		System.out.println("Resultados: ");
		System.out.printf("TRIÂNGULO: %.3f%nCÍRCULO: %.3f%nTRAPÉZIO: %.3f%nQUADRADO: %.3f%nRETÂNGULO: %.3f%n", resul1,
				resul2, resul3, resul4, resul5);
		sc.close();
	}
}