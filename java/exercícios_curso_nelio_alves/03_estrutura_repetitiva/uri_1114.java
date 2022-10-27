/*
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha
incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser
impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002.
*/

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int pass = 0;
		System.out.println("Entre com a senha: ");
		Scanner sc = new Scanner(System.in);
		pass = sc.nextInt();
		while (pass != 2002) {
			System.out.println("Senha Incorreta!");
			pass = sc.nextInt();
		}
		sc.close();
		System.out.println("Acesso concedido");
	}
}