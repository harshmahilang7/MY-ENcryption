/*Que 3 :
=======
Write a Java program to calculate compound interest for 3 years? 
Formula: amount=principle*((1+rate/100)*(1+rate/100)*(1+rate/100));

Sample Input :
Enter the principal amount: 1000
Enter the rate of interest: 5

Sample Output :
The amount after 3 years with compound interest is: 1157.625

===========================*/
import java.util.Scanner;
class ProgramThree 
{
	public static void main(String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter the principle amount");
		double principle=sc.nextDouble();
		System.out.print("Enter the Rate of Interest");
		double rateofinterest=sc.nextDouble();
		double time=3;
		double compountinterest=principle*((1+rateofinterest/100)*(1+rateofinterest/100)*(1+rateofinterest/100));
		System.out.printf("the amount after 3 year with compount interest is %.3f",compountinterest);
	}
}
