package question;


//Ques - 1
//-------------
//Vehicle Insurance Premium Calculation Based on Vehicle Age and Type
//Classes:
//Vehicle (BLC):
//
//Attributes (all private):
//vehicleType (String) - The type of vehicle ("Car", "Motorcycle", "Truck").
//vehicleAge (int) - The age of the vehicle in years.
//
//Methods:
//setVehicleType(String type): void - Sets the vehicle type.
//setVehicleAge(int age): void - Sets the vehicle age.
//getVehicleType(): String - Returns the vehicle type.
//getVehicleAge(): int - Returns the vehicle age.
//displayDetails(): void - Displays the vehicle's type and age.
//
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

public class p1blc {
	String vehicleType;
	int vehicleAge;
	
	public String getVehicleType() {
		return vehicleType;
	}
	public void setVehicleType(String vehicleType) {
		this.vehicleType = vehicleType;
	}
	public int getVehicleAge() {
		return vehicleAge;
	}
	public void setVehicleAge(int vehicleAge) {
		this.vehicleAge = vehicleAge;
	}
	public void displayDetails()
	{
		System.out.println("vehicleType : "+vehicleType);
		System.out.println("vehicleAge : "+vehicleAge);
	}

}
