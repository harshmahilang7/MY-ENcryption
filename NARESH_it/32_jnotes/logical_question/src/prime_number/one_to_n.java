package prime_number;

import java.util.Scanner;

public class one_to_n {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the number ");
		int last=sc.nextInt();
		for (int j = 1; j <= last; j++) 
		{
			int count = 0;
			int num = j;
			for (int i = 1; i <= num; i++) {
				if (num % i == 0) {
					count++;
				}
			}

			if (count == 2||num==1) {
				System.out.println("it is prime number : " + num);
			} else
				System.out.println("it is not prime number : " + num);
		}
		sc.close();
	}

}
