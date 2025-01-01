package testq2;

public class Bike extends Vehicle {

//	2.2 Bike Class
//	Inherits from Vehicle.
//	Additional Attribute:
//	helmetIncluded (Type: boolean, Modifier: private) - Whether the rental includes a helmet.
//	Constructors:
//	A public constructor with parameters baseRate and helmetIncluded.
//	Methods:
//	Overrides calculateRentalCost(int hours):
//	Calculates the cost as baseRate * hours.
//	Adds an additional 50 if the helmet is included.
//	Overrides showDetails():
//	Prints details including whether a helmet is included.

	private boolean helmetIncluded;

	public Bike(double baseRate,boolean helmetIncluded) {
		super("Bike", baseRate);
		this.helmetIncluded=helmetIncluded;
	}

	@Override
	double calculateRentalCost(int hours) {
		if(helmetIncluded==true)
		{
			return getBaseRate()*hours+50;
		}
		else
		{
			return getBaseRate()*hours;

		}

	}
	@Override
	protected void showDetails() {
		super.showDetails();
		System.out.println("helmetIncluded :-"+helmetIncluded);
	}




}
