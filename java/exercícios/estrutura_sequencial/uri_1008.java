import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args){
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite o número do funcionário:");
		int n = sc.nextInt();
		System.out.println("Digite o número de horas trabalhadas:");
		double hours = sc.nextDouble();
		System.out.println("Digite o valor por hora:");
		double v = sc.nextDouble();
		
		double total = hours*v;

		System.out.println("Number = " + n);
		System.out.printf("Salary = %.2f", total);
		sc.close();
	}
}