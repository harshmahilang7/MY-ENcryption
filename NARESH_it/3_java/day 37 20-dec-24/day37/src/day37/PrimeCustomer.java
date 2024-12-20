package day37;

public class PrimeCustomer extends Customer {
	
	protected double discountRate;

	public PrimeCustomer(String name, double discountRate) {
		super(name);
		this.discountRate = discountRate;
	}
	
	@Override
	public void calculateBill(double ...prices)
	{
		System.out.println(" For Prime customer with 10% discount in the final bill amount");
		super.calculateBill(prices);
		this.total=total-total*0.1;
		
	}

	@Override
	public String toString() {
		return "PrimeCustomer [discountRate=" + discountRate + ", name=" + name + ", total=" + total + "]";
	}


	

}
