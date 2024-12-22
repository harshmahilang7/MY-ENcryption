package q3;

public class BookingSystem {

	
	public static void bookTicket(DomesticAirline airline, int seats)
	{
		System.out.println("Number of Seats: "+seats);
		airline.displayDetails();
		System.out.println("Total Fare (after discount): "+airline.calculateFare(seats));
		System.out.println("-----------------------");
	}
	public static void bookTicket(internationalDestinations airline, int seats)
	{
		System.out.println("Number of Seats: "+seats);
		airline.displayDetails();
		System.out.println("Total Fare (after discount): "+airline.calculateFare(seats));
		System.out.println("-----------------------");
	}
	
	

}
