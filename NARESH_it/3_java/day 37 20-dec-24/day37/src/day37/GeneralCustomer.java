package day37;

public class GeneralCustomer extends Customer {

	public GeneralCustomer(String name) {
		super(name);
		// TODO Auto-generated constructor stub
	}
	@Override
	public void calculateBill(double... prices)
	{
		System.out.println("For general customer discount is not available");
		super.calculateBill(prices);
	}
	@Override
	public String toString() {
		return "GeneralCustomer [name=" + name + ", total=" + total + "]";
	}
	
	
}
