//Program to implement Anonymous inner class by using abstract class
abstract class Vehicle
{
	public abstract void run();
}

public class AnonymousDemo2 {

	public static void main(String[] args)
	{
		Vehicle car = new Vehicle()
		{
			@Override
			public void run() 
			{
			  System.out.println("car is Running");				
			}
			
		};

		Vehicle bike = new Vehicle() 
		{			
			@Override
			public void run() 
			{
				System.out.println("Bike is running");				
			}
		};
		
		car.run();  bike.run();
		
	}

}