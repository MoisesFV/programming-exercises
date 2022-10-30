import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Ímpares até o número(max 1000, min 1): ");
		int num = sc.nextInt();
		if (num < 1){
			num = 1;
		}else if(num > 1000){
			num = 1000;
		}
		for(int i = 0; i<= num; i++){
			if((i % 2) != 0){
				System.out.println(i);
			}
		}
		sc.close();
	}
}