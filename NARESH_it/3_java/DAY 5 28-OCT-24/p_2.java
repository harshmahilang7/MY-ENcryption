/*
Que 2 :
=======

Write a java program to find the ASCII value of a character
For Example
Output sholud be in below formart
The ASCII value of a is : 97
=================================================
*/
import java.util.Scanner;
class p_2 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("enter the char : ");
		char x=sc.next().charAt(0);
		int y=x;
		System.out.println("The ASCII value of a is : "+y);
	}
}
