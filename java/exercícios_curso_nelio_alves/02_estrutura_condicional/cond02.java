import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		System.out.println("Entre com um número: ");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		if ((num % 2) == 0) {
			System.out.println("Par");
		} else
			System.out.println("Ímpar");
		sc.close();
	}
}