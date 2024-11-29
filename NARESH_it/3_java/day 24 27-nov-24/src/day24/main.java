package day24;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Car car = new Car("Audi", "Q8", 2021, 4);
		System.out.println("Car Details:");
		car.displayDetails();
		Bike bike = new Bike("Yamaha", "MT-07", 2020, "Sports");
		System.out.println("\nBike Details:");
		bike.displayDetails();

	}

}
