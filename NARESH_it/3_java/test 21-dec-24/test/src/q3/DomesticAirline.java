package q3;

public class DomesticAirline extends Airline{
	
	int domesticRoutes;
	double discountRate;

	
	
	public DomesticAirline(String airlineName, double baseFare, int domesticRoutes, double discountRate) {
		super(airlineName, baseFare);
		this.domesticRoutes = domesticRoutes;
		this.discountRate = discountRate;
	}

	@Override
	public double calculateFare(int seats)
	{
		baseFare=baseFare-baseFare*0.1;
		return (double)seats*baseFare;
	}
	
	@Override
	public void displayDetails()
	{
		System.out.println("airlineName : "+airlineName);
		System.out.println("base price of one seat : "+baseFare);
		System.out.println("Domestic Routes : "+domesticRoutes);
		System.out.println("Discount Rate: 10% (applies to the total fare)");
	}
	
	

}
