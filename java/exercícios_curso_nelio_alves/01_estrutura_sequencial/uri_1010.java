import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args){
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		System.out.println("Código da peça 1: ");
		int peca = sc.nextInt();//Exercício pediu, mas está sem uso a variável.
		System.out.println("Número de peças 1: ");
		int num_pecas = sc.nextInt();
		System.out.println("Valor de cada peça 1: ");
		double valor = sc.nextDouble();
		
		System.out.println("Código da peça 2: ");
		int peca2 = sc.nextInt();//Exercício pediu, mas está sem uso a variável.
		System.out.println("Número de peças 2: ");
		int num_pecas2 = sc.nextInt();
		System.out.println("Valor de cada peça 2: ");
		double valor2 = sc.nextDouble();
		
		double total = num_pecas*valor+num_pecas2*valor2;
		
		System.out.printf("VALOR A PAGAR: %.2f", total);
		sc.close();
	}
}