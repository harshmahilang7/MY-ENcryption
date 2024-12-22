package test.q1;

public class Customer {
	String name;
	String contactNumber;
	Courier courier;
	public Customer(String name, String contactNumber, Courier courier) {
		super();
		this.name = name;
		this.contactNumber = contactNumber;
		this.courier = courier;
	}
	
	public void displayCustomerDetails()
	{
		System.out.println("Customer name : "+name);
		System.out.println("contact Number : "+contactNumber);
		
		if(courier instanceof DomesticCourier)
		{
			DomesticCourier d=(DomesticCourier)courier;
			d.displayCourierDetails();
			System.out.println("Service: Across countries");
			System.out.println("Total Cost: "+d.calculateCost());
			
		}
		else
		{
			InternationalCourier d=(InternationalCourier)courier;
			d.displayCourierDetails();
			System.out.println("Service: Across countries");
			System.out.println("Total Cost: "+d.calculateCost());

		}
//		this.displayCourierDetails(); 
	}
	
	
	

}
