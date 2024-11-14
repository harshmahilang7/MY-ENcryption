package question;

//InsurancePremium (BLC):
//
//Attributes (all private):
//
//premiumAmount (double) - The calculated insurance premium.
//
//Methods:
//getPremiumAmount(): double - Returns the premium amount.
//calculatePremium(Vehicle vehicle): InsurancePremium - A static method that takes a Vehicle object as a parameter and returns an InsurancePremium object. The premium is calculated based on the vehicleType and vehicleAge.
//
//Logic:
//If the vehicle type is "Car":
//Age < 5 years: Premium = 5% of vehicle value
//Age 5-10 years: Premium = 7% of vehicle value
//Age > 10 years: Premium = 10% of vehicle value
//
//If the vehicle type is "Motorcycle":
//Age < 3 years: Premium = 3% of vehicle value
//Age 3-8 years: Premium = 5% of vehicle value
//Age > 8 years: Premium = 8% of vehicle value
//
//If the vehicle type is "Truck":
//Age < 5 years: Premium = 6% of vehicle value
//Age 5-10 years: Premium = 8% of vehicle value
//Age > 10 years: Premium = 12% of vehicle value
//
//VehicleInsuranceTest (ELC):
//In the main method:
//Create an instance of the Vehicle class.
//Set the vehicle type and age using the setter methods.
//Call the displayDetails() method to display the vehicle's details.
//Call the calculatePremium(Vehicle vehicle) method and print the premium amount.
//
//Example:
//Vehicle: Type = "Car", Age = 6 years
//Insurance Premium: 7% of vehicle value


public class InsurancePremium {
	double premiumAmount;

	public double getPremiumAmount() {
		return premiumAmount;
	}

	public void setPremiumAmount(double premiumAmount) {
		this.premiumAmount = premiumAmount;
	}
	
	public static InsurancePremium calculatePremium(p1blc vehicle)
	{
		String vtype=vehicle.getVehicleType();
		int age=vehicle.getVehicleAge();
		InsurancePremium ip=new InsurancePremium();
		
		if(vtype.equalsIgnoreCase("car"))
		{
			if(age<5)
			{
				ip.premiumAmount=5;
			}
			else if(age>5&&age<10)
			{
				ip.premiumAmount=7;
			}
			else if(age>10)
			{
				ip.premiumAmount=10;
			}
		}
		else if(vtype.equalsIgnoreCase("Truck"))
		{
			if(age<5)
			{
				ip.premiumAmount=6;
			}
			else if(age>5&&age<10)
			{
				ip.premiumAmount=8;
			}
			else if(age>10)
			{
				ip.premiumAmount=12;
			}
		}
		else if(vtype.equalsIgnoreCase("Motorcycle"))
		{
			if(age<5)
			{
				ip.premiumAmount=3;
			}
			else if(age>5&&age<10)
			{
				ip.premiumAmount=5;
			}
			else if(age>10)
			{
				ip.premiumAmount=10;
			}
		}
		return ip;
	}
}
