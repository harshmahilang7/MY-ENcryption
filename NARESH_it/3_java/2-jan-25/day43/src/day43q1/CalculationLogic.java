package day43q1;

import java.util.function.Predicate;

public class CalculationLogic {
	
	public static boolean testPredicate(int b,Predicate<Integer> p)
	{	
		return p.test(b);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Predicate<Integer> isEven = a -> a%2==0;
		Predicate<Integer> isGreaterThanTen= a -> a>10;
		
		Predicate<Integer> isPrime= a -> 
		{
			 int count=0;
		     for (int i=1;i<=a;i++)
		     {
		    	
		    	 if(a%i==0)
		    	 {
		    		 count++;
		    	 }
		    	 
		     }
		     if(count==2)
		     {
		    	 return true;
		     }
		     else 
		    	 return false;
		};
		
		 // Sample integer number
        int number = 13;

        // Test predicates
        System.out.println("Is " + number + " even? " + testPredicate(number, isEven));
        System.out.println("Is " + number + " greater than 10? " + testPredicate(number, isGreaterThanTen));
        System.out.println("Is " + number + " prime? " + testPredicate(number, isPrime));
		
	}

}
