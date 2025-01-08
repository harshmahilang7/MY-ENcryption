package fabonoic_series;

import java.util.Scanner;

public class one_to_n {

	public static void main(String[] args) {
		System.out.println("enter the number");
		Scanner sc=new Scanner(System.in);
		int last=sc.nextInt();
		int a=0;
		int b=1;
		System.out.print(a+" "+b+" ");
		for(int i=0;i<=last;i++)
		{
			int c=a+b;
			a=b;
			b=c;
			System.out.print(c+" ");
		}
		sc.close();

	}

}
