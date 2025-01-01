package Lambda_Expression;
import java.util.*;

@FunctionalInterface
interface Predictable
{
	boolean predict(int x);
}

public class Lambdademo5 
{	
	public static void main(String[] args) 
	{
	   Predictable p1 =  num -> 
		{
		    return num % 2 == 0;
		};
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Number :");
		int no = sc.nextInt();
		boolean isEven = p1.predict(no);
		System.out.println("Is "+no+ " even number "+isEven);
	}
}
