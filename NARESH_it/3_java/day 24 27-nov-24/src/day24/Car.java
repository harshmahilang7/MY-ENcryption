package day24;

public class Car extends Vehicle
{
	protected int numberOfDoors;

	public Car(String make, String model, int year, int numberOfDoors) {
		super(make, model, year);
		if(numberOfDoors<0)
		{
			System.err.println("Error Invalid Input");
		}
		this.numberOfDoors = numberOfDoors;
	}


	public void displayDetails()
	{
		super.displayDetails();
		System.out.println("numberOfDoors : "+numberOfDoors);

	}

}
