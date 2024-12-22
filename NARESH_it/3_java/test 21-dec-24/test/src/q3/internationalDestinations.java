package q3;

public class internationalDestinations extends Airline {
	int internationalDestinations;
	double taxRate;

	public internationalDestinations(String airlineName, double baseFare, int internationalDestinations,
			double taxRate) {
		super(airlineName, baseFare);
		this.internationalDestinations = internationalDestinations;
		this.taxRate = taxRate;
	}

	
	@Override
	public double calculateFare(int seats)
	{
		baseFare=baseFare-baseFare*0.2;
		return (double)seats*baseFare;
	}
	
	@Override
	public void displayDetails()
	{
		System.out.println("airlineName : "+airlineName);
		System.out.println("base price of one seat : "+baseFare);
		System.out.println("internationalDestinations  : "+internationalDestinations);
		System.out.println("Discount Rate: 20% (applies to the total fare)");
	}
	
	
}
