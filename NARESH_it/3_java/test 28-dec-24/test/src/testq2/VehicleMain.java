package testq2;

public class VehicleMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		3. VehicleMain Class
//		Purpose: Test the functionality of the Vehicle system.
//		Flow:
//		Create instances of Car and Bike with different configurations.
//		Display the details of each vehicle using the showDetails() method.
//		Calculate and display the rental cost for each vehicle using calculateRentalCost().

		Vehicle car=new Car(500, true);
		car.showDetails();
		System.out.println("Rental Cost for 5 hours: Rs."+car.calculateRentalCost(5));
System.out.println("-----------------------------------------------------------");
		Vehicle bike=new Bike(100, true);
		bike.showDetails();
		System.out.println("Rental Cost for 3 hours: Rs."+bike.calculateRentalCost(3));




	}

}
