package test.q1;

public class Courier {
	String courierType;
	double weight;
	
	public Courier(String courierType, double weight) {
		super();
		this.courierType = courierType;
		this.weight = weight;
	}
	
	
	public double calculateCost() 
	{
		return 0.0;
	}
	
	public void displayCourierDetails()
	{
		System.out.println("courierType : "+courierType);
		System.out.println("weight : "+weight);
	}
	
	
	

}
