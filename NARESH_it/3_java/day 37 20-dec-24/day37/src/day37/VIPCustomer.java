package day37;

public class VIPCustomer extends Customer {
	protected double discountRate;

	public VIPCustomer(String name, double discountRate) {
		super(name);
		this.discountRate = discountRate;
	}
	
	@Override
	public void calculateBill(double... prices)
	{
		System.out.println(" For vip customer with 20% discount in the final bill amount");
		super.calculateBill(prices);
		this.total=total-total*0.2;
		
	}

	@Override
	public String toString() {
		return "VIPCustomer [discountRate=" + discountRate + ", name=" + name + ", total=" + total + "]";
	}

	
	
}
