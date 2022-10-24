import java.util.Scanner;
import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		System.out.println("Entre com o valor do raio do círculo: ");
		Scanner sc = new Scanner(System.in);
		
		double x = sc.nextDouble();
		double area = Math.PI * Math.pow(x,2);
		
		System.out.printf("A área do círculo é: %.4f" , area);
		
		
		
		sc.close();
	}

}