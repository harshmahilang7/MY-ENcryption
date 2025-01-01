package Functional_interface;
@FunctionalInterface
interface Vehicle
{
	void run();	         //            => only one abstract method 
	default void runing()    //  and n number of method default and static 
	{                         //  abstract method must be one only.
		System.out.println("default method");
	}
}

public class Functional_interface_demo1 {

	public static void main(String[] args) 
	{
		Vehicle car = new Vehicle() 
		{		
			@Override
			public void run() 
			{
				System.out.println("Car is Running");				
			}
			
		};
		
		Vehicle bike = new Vehicle() 
		{		
			@Override
			public void run() 
			{
				System.out.println("Bike is Running");				
			}
		};
		
		car.run();
		car.runing();
		bike.run();
	}
}
