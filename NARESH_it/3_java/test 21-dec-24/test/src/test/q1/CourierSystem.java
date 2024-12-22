package test.q1;

public class CourierSystem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Courier d=new DomesticCourier("Domestic", 5.0);

		Customer cust1= new Customer("Alice","9876543210", d);
		cust1.displayCustomerDetails();
		
		System.out.println("------------------------------------");
		
		Courier i=new InternationalCourier("International", 3.0);
		Customer cust2= new Customer("bob","9123456780", i);
		cust2.displayCustomerDetails();

	}

}
