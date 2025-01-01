package composition;

public class Car
{
	private String carName;
	private int carModel;
	private final Engine engine; // HAS-A Relation [Blank final field]
	
	public Car(String carName, int carModel)
	{
		super();
		this.carName = carName;
		this.carModel = carModel;
		this.engine = new Engine("Battery", 1200); //Composition		
	}


	@Override
	public String toString() 
	{
		return "Car [carName=" + carName + ", carModel=" + carModel + ", engine=" + engine + "]";
	}
	
	

}