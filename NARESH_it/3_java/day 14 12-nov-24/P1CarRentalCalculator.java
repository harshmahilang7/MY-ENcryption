class P1CarRentalCalculator 
{
	public static void main(String[] args) 
	{
		CarRental obj1=new CarRental("audi",5,1000);
		System.out.println(obj1.calculateTotalCost());
		obj1.setRentalDays(9);
		System.out.println(obj1.calculateTotalCost());
	}
}
