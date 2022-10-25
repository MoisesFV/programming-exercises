import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		System.out.println("Entre com o horário inicial: ");
		Scanner sc = new Scanner(System.in);
		int ini_hour, final_hour, total;
		ini_hour = sc.nextInt();
		System.out.println("Entre com o horário final: ");
		final_hour = sc.nextInt();
		if (ini_hour == final_hour) {
			total = 24;
			System.out.println("O jogo durou " + total + " horas");
		} else if (final_hour > ini_hour) {
			total = final_hour - ini_hour;
			System.out.println("O jogo durou " + total + " horas");
		} else {
			total = (24 - ini_hour) + final_hour;
			System.out.println("O jogo durou " + total + " horas");
		}
		sc.close();
	}

}