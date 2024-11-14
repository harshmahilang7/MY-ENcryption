/*
Ques - 1
-------------
Car Rental Cost Calculation
You are creating a CarRental (BLC) class for a car rental service. 

The class should have the following attributes:
private: carModel (String)
private: rentalDays (int) - the number of days the car is rented.
private: dailyRate (double) - the rate charged per day.
The class should calculate the total rental cost and apply a discount based on the number of rental days.

Implement below methods:

Implement a parameterized constructor to initialize all attributes.
name: CarRental
No return type.
Parameters: String CarModel, int rentalDays, double dailyRate


method name: calculateTotalCost
modifiers: public
return type: double
If rentalDays are greater than 7, apply a 10% discount on the total cost.
Otherwise, no discount is applied. Return the total rental cost from this method.

Implement public setter methods to modify the values:
method name: setCarModel
parameter: String carModel
modifiers: public
return type: void
This method initializes the carModel attributes.

method name: setRentalDays
parameter: int rentalDays
modifiers: public
return type: void
This method initializes the rentalDays attributes.

method name: setDailyRate
parameter: int dailyRate
modifiers: public
return type: void
This method initializes the dailyRate attributes.

Implement public getter methods to retrieve the values of these attributes.

Create a ELC class CarRentalCalculator
Write a main method to:
Create an instance of the CarRental class.
Initialize the attributes using parameterized constructor.
Calculate and print the total cost using the calculateTotalCost() method with car model and rentalDays.
Modify the rentalDays by using setRentanDays() and print the new total cost.
*/
class CarRental 
{
	private String carModel;
	private int rentalDays;
	private double dailyRate;
	private double totalCost;
	
	CarRental(String CarModel, int rentalDays, double dailyRate)
	{
		this.carModel=carModel;
		this.rentalDays=rentalDays;
		this.dailyRate=dailyRate;
	}
	
	public double calculateTotalCost()
	{
		//method name: calculateTotalCost
		//modifiers: public
        //return type: double
        //If rentalDays are greater than 7, apply a 10% discount on the total cost. Otherwise, no discount is applied. Return the total rental cost from this method.
		
		if(rentalDays>7)
		{
			totalCost=dailyRate-(dailyRate/100*10);
			return totalCost;
		}
		else 
		{
			return dailyRate;
		}
		
	}
	

	
	public void setCarModel(String carModel)
	{
			//Implement public setter methods to modify the values:
			//method name: setCarModel
			//parameter: 
			//modifiers: public
			//return type: void
			//This method initializes the carModel attributes.
		this.carModel=carModel;
	}
	
	public void setRentalDays(int rentalDays)
	{
		this.rentalDays=rentalDays;
	}
	public void setDailyRate(double dailyRate)
	{
		this.dailyRate=dailyRate;
	}
	
	public String getCarModel()
	{
		return carModel;
	}
	
	public int getRentalDays()
	{
		return rentalDays;
	}
	public double getDailyRate()
	{
		return dailyRate;
	}
	
}
