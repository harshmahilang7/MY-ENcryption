package DefaultMethod;

public class Car implements Vehicle
{
	@Override
	public void run() 
	{
		System.out.println("Car is Running");		
	}

	@Override
	public void horn() 
	{
		System.out.println("Car has Horn");		
	}
	
	@Override
	public void digitalMeter()  //java 8
	{
	  System.out.println("Car has Digital Meter Facility");	  
	}
	
}