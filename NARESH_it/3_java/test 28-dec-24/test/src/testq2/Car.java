package testq2;

public class Car extends Vehicle{
//	2.1 Car Class
//	Inherits from Vehicle.
//	Additional Attribute:
//	driverIncluded (Type: boolean, Modifier: private) - Whether the rental includes a driver.
//	Constructors:
//	A public constructor with parameters baseRate and driverIncluded.
//	Methods:
//	Overrides calculateRentalCost(int hours):
//	Calculates the cost as baseRate * hours.
//	Adds an additional 200 if the driver is included.
//	Overrides showDetails():
//	Prints details including whether a driver is included.

	private boolean driverIncluded;

	public Car(double baseRate,boolean driverIncluded) {
		super("Car", baseRate);
		this.driverIncluded=driverIncluded;
	}

	@Override
	double calculateRentalCost(int hours) {
		if(driverIncluded==true)
		{
			return getBaseRate()*hours+200;
		}
		else
		{
			return getBaseRate()*hours;

		}

	}
	@Override
	protected void showDetails() {
		super.showDetails();
		System.out.println("driverIncluded :-"+driverIncluded);
	}






}
