import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		System.out.println("Entre com dois números: ");
		Scanner sc = new Scanner(System.in);
		int num, num2;
		num = sc.nextInt();
		num2 = sc.nextInt();
		sc.close();
		if (num > num2) {
			if ((num % num2) == 0) {
				System.out.println("Múltiplos");
			} else
				System.out.println("Não Múltiplos");
		} else{
			if ((num2 % num) == 0) {
				System.out.println("Múltiplos");
			} else
				System.out.println("Não Múltiplos");
		}
	}
}