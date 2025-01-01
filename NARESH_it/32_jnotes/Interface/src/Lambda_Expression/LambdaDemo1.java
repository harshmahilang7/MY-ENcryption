package Lambda_Expression;

interface Vehicle
{
	void run();  //SAM [Single Abstract Method]
	
}

public class LambdaDemo1 {

	public static void main(String[] args) 
	{
		Vehicle car = () -> System.out.println("Car is Running");
		car.run();

		Vehicle bike = () -> System.out.println("Bike is Running");
		bike.run();
		
		
		Vehicle bus = () -> System.out.println("Bus is Running");
		bus.run();
		
	}

}