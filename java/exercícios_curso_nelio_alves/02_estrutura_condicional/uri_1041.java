import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		double x, y;
		Scanner sc = new Scanner(System.in);
		System.out.println("Entre com o valor de X: ");
		x = sc.nextDouble();
		System.out.println("Entre com o valor de Y: ");
		y = sc.nextDouble();
		if (x < 0 && y < 0) {
			System.out.println("Quadrante 3");
		} else if (x > 0 && y < 0) {
			System.out.println("Quadrante 4");
		} else if (x < 0 && y > 0) {
			System.out.println("Quadrante 2");
		} else if (x == 0 && y == 0) {
			System.out.println("ORIGEM");
		} else {
			System.out.println("Quadrante 1");
		}
		sc.close();
	}
}