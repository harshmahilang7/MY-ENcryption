package day;

import java.util.InputMismatchException;
import java.util.Scanner;

public class SimpleExceptionDemo {
   public static void main(String[] args) {
	   try 
	   {
		   Scanner sc=new Scanner(System.in);
		   System.out.println("enter the num1");
		   int a=sc.nextInt();
		   System.out.println("enter the num2");
		   int b=sc.nextInt();
		} 
	   catch (Exception e) 
	   {
		System.out.println("enter the only digit");
		System.out.println(e. getMessage());
		System.out.println(e.toString());
		e.printStackTrace();
		}
   }

}
