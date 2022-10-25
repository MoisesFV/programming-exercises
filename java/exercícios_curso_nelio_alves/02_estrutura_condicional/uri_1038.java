/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A
seguir, calcule e mostre o valor da conta a pagar.(Tabela contida no pdf de exercícios)
*/

import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cod, quantd;
		System.out.println("Entre com o código do item: ");
		cod = sc.nextInt();
		System.out.println("Entre com a quantidade: ");
		quantd = sc.nextInt();
		double price;
		
		if (cod == 1){
			price = 4.00;
		}else if (cod == 2){
			price = 4.50;
		}else if (cod == 3){
			price = 5.00;
		}else if (cod == 4){
			price = 2.00;
		}else{
			price = 1.50;
		}
		System.out.printf("Total: %.2f", price);
		sc.close();
		
	}
}