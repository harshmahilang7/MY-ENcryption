package day24;


//Attributes: [protected]
//type: String
//
//Constructor:
//Bike(String make, String model, int year, String type): Constructor to initialize the attributes.
//
//Methods:
//void displayDetails(): Method to display the details of the bike, overriding the method from Vehicle.
//
public class Bike extends Vehicle{

	String type;

	public Bike(String make, String model, int year, String type) {
		super(make, model, year);
		this.type = type;
	}

	public void displayDetails()
	{
		super.displayDetails();
		System.out.println("type : "+type);
	}




}
