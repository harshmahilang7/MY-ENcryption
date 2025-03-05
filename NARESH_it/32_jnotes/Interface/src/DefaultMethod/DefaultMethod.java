package DefaultMethod;

public class DefaultMethod 
{
	public static void main(String[] args) 
	{
		
		Vehicle v = null;
		
		v = new Car(); 
		v.run(); 
		v.horn(); 
		v.digitalMeter();
		
		v = new Bike(); 
		v.run(); 
		v.horn();
		v.digitalMeter();
	}

}