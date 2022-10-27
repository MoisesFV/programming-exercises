/*
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva
um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel
4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até
que seja válido). O programa será encerrado quando o código informado for o número 4. Deve ser escrito a
mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, conforme
exemplo.
*/

import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		int x = 0, y = 0, z = 0, i = 0;
		System.out.println("Entre com o yipo de combustível:[1]Álcool, [2]Gasolina, [3]Diesel, [4]Sair");
		Scanner sc = new Scanner(System.in);
		i = sc.nextInt();
		while(i != 4){
			if(i == 1){
				x++;
			}else if(i == 2){
				y++;
			}else if(i == 3){
				z++;
			}
			System.out.println("Entre com o yipo de combustível:[1]Álcool, [2]Gasolina, [3]Diesel, [4]Sair");
			i = sc.nextInt();
		}
		System.out.println("Muito Obrigado!");
		System.out.println("Álcool: " + x);
		System.out.println("Gasolina: " + y);
		System.out.println("Diesel: " + z);
		sc.close();
	}
}