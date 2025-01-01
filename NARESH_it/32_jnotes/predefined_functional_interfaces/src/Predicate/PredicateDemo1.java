package Predicate;

import java.util.Scanner;
import java.util.function.Predicate;

public class PredicateDemo1
{
	public static void main(String[] args) 
	{
	  //Verify whether a person is eligible for vote or not
		
	  Predicate<Integer> p1 =  age -> 
	  {
		  return age >=18;  
	  };
	 	

	  Scanner sc = new Scanner(System.in);
	  System.out.print("Enter your Age :");
	  int age = sc.nextInt();
	  
	  boolean isEligible =  p1.test(age);
	  
	  if(isEligible)
	  {
		  System.out.println("You are eligible for Voting");
	  }
	  else
	  {
		  System.out.println("You are not eligible for Voting");
		  
	  }
	  sc.close();

	}

}