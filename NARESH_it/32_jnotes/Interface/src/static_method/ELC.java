package static_method;


public class ELC //This class is in another package.
{
	public static void main(String[] args)
	{
		double result = Calculate.getCube(8);
		System.out.println("Cube of 8 is :"+result);
		
		result = Calculate.getSquare(12);
		System.out.println("Square of 12 is :"+result);


	}

}