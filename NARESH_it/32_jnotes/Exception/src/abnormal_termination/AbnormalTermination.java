package abnormal_termination;

import java.util.Scanner;

public class AbnormalTermination {

	public static void main(String[] args) 
	{
       System.out.println("Main method Started!!!");
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the value of x :");
		int x = sc.nextInt();
		
		System.out.print("Enter the value of y :");
		int y = sc.nextInt();
		
		int result = x/y;
		
		System.out.println("Result is :"+result);
		
		System.out.println("Main method Completed!!!");
		sc.close();

	}

}