package test.q1;

public class DomesticCourier extends Courier {

	public DomesticCourier(String courierType, double weight) {
		super(courierType, weight);
	}
	
	
	@Override
	public double calculateCost() 
	{
		return this.weight*50;
	}

}
