package test.q1;

public class InternationalCourier extends Courier {

	public InternationalCourier(String courierType, double weight) {
		
		super(courierType, weight);
	}

	@Override
	public double calculateCost() 
	{
		return this.weight*150;
	}

	
}
