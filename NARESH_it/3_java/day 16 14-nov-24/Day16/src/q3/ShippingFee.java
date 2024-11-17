package q3;

public class ShippingFee {
	double feeAmount;
	
	
	public double getFeeAmount() {
		return feeAmount;
	}


	public static ShippingFee calculateFee(Package pkg)
	{
		ShippingFee obj1=new ShippingFee();
		//If packageWeight ≤ 5kg:
		//Distance ≤ 100km: Fee = 5
		//Distance > 100km: Fee = 10
		//If packageWeight > 5kg but ≤ 20kg:
		//Distance ≤ 100km: Fee = 10
		//Distance > 100km: Fee = 20
		//If packageWeight > 20kg:
		//Distance ≤ 100km: Fee = 20
		//Distance > 100km: Fee = 40
		double pw=pkg.getPackageWeight();
		int distance=pkg.getShippingDistance();
		
		if(pw<=5)
		{
			if(distance<=100)
			{
				obj1.feeAmount=5;
			}
			else if(distance>100)
			{
				obj1.feeAmount=10;
			}
		}
		else if(pw>5&&pw<=20)
		{
			if(distance<=100)
			{
				obj1.feeAmount=10;
			}
			else if(distance>100)
			{
				obj1.feeAmount=20;
			}
		}
		else if(pw>20)
		{
			if(distance<=100)
			{
				obj1.feeAmount=20;
			}
			else if(distance>100)
			{
				obj1.feeAmount=40;
			}
		}
		
		return obj1;
	}
}
