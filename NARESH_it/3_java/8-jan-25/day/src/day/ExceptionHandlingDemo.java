package day;

import java.util.Scanner;

public class ExceptionHandlingDemo {
	public static void handleExceptions(String a)
	{
		
	}
	
//	Inside the method, use a try block to:
//		Print the length of the input string.
//		Attempt to convert the string input to an integer using Integer.parseInt().
//		Attempt to call a method on the input string to deliberately cause a NullPointerException if the string is null.
//		Catch NumberFormatException and print an appropriate message.
//		Catch NullPointerException and print an appropriate message.
//
//		Create a main method:
//		Inside the main method, create a Scanner object to read input from the user.
//		Prompt the user to enter a string.
//		Read the user's input and pass it to the handleExceptions method.
//		Close the Scanner object.
//		Test the program:
//
//		Write three test cases:
//		Input a valid integer string.
//		Input a non-integer string.
//		Input a null string to see the NullPointerException handling.
//	
	 static public void main(String[] args) 
	 {
		 
		 try {
			Scanner sc=new Scanner(System.in);
			 System.out.println("enter the string");
			 String s=sc.nextLine();
			 System.out.println("the length is "+s.length());
			 int a=Integer.parseInt(s);
			 System.out.println("the interger is "+a);
			 sc.close();
		} 
		 catch (NumberFormatException e)
		 {
			System.out.println("NumberFormatException -catch");
			e.printStackTrace();
		}
		 catch (NullPointerException e)
		 {
			System.out.println("NullPointerException -catch");
			e.printStackTrace();
		}
		 
		 
		
	}


}
