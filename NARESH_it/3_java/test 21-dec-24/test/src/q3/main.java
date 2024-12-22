package q3;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		DomesticAirline d=new DomesticAirline("Flyways", 2000, 15, 10);
		BookingSystem.bookTicket(d,3);
		
		internationalDestinations i = new internationalDestinations("GlobalJet", 5000, 25, 20);
		BookingSystem.bookTicket(i,3);

	}

}
