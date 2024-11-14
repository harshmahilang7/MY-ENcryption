/*Program-4
----------
Write a program in java to input number of days. Find and display number of years, months and days.

=========================================*/
import java.util.Scanner;
class p_4
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter number of days: ");
		int days=sc.nextInt();
		int year=days/365;
		int month=days%365/30;
		int day=days%365%30;
		System.out.println(year+" years[s] "+month+" months[s] "+day+" days[s]");
		
	}
}
