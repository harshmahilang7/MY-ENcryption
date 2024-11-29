package q3;

public class StudentTicket extends Ticket {


//Instance variable:-
//
//boolean studentDiscount,private
//
//Create a parameterized constructor for Instance variable to initialize the variable.
//
////Use super keyword to initialize Ticket class constructor attributes.
//
//Generate Getters and setters for Instance variable to get values and set values.
//
//Create a class MainTicket which contains main method to demonstrate the usage.
//
////Creating a Ticket object using the parameterized constructor
//
////Creating a VIPTicket object using the parameterized constructor
//
////Creating a StudentTicket object using the parameterized constructor

	private boolean studentDiscount;

	public boolean isStudentDiscount() {
		return studentDiscount;
	}

	public void setStudentDiscount(boolean studentDiscount) {
		this.studentDiscount = studentDiscount;
	}

	public StudentTicket(String eventName, int seatNumber, double price, boolean studentDiscount) {
		super(eventName, seatNumber, price);
		this.studentDiscount = studentDiscount;
	}

	@Override
	public String toString() {
		return "StudentTicket [studentDiscount=" + studentDiscount + ", toString()=" + super.toString() + "]";
	}


}
