import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		System.out.println("Entre com a renda mensal: ");
		Scanner sc = new Scanner(System.in);
		double renda = sc.nextDouble();
		double ir;
		if (renda >= 0 && renda <= 2000.0) {
			System.out.println("Isento de IR.");
		} else if (renda >= 2000.01 && renda <= 3000.0) {
			ir = (renda - 1000) * 0.08;
			System.out.printf("Imposto devido: R$%.2f", ir);
		} else if (renda >= 3000.01 && renda <= 4500.0) {
			ir = (((renda - 3000) * 0.18) + (1000.0 * 0.08));
			System.out.printf("Imposto devido: R$%.2f", ir);
		} else if (renda >= 4500.01) {
			ir = (((renda - 4500) * 0.28) + (1000.0 * 0.08) + (1500.0 * 0.18));
			System.out.printf("Imposto devido: R$%.2f", ir);
		}
		sc.close();
	}
}