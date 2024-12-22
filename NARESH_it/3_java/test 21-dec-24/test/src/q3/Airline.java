package q3;

public class Airline {
	String airlineName;
	double baseFare;
	
	
	
	
	public Airline(String airlineName, double baseFare) {
		super();
		this.airlineName = airlineName;
		this.baseFare = baseFare;
	}

	public double calculateFare(int seats)
	{
		return (double)seats*baseFare;
	}
	
	public void displayDetails()
	{
		System.out.println("airlineName : "+airlineName);
		System.out.println("base price of one seat : "+baseFare);

		
	}

}
