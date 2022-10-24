import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int a, b;
		System.out.printf("Digite o primeiro número:%n");
		a = sc.nextInt();
		System.out.printf("Digite o segundo número:%n");
		b = sc.nextInt();

		int soma = a + b;

		System.out.printf("Soma: %d %n", soma);
		sc.close();

	}

}