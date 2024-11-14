
class P4CustomerTester
{
	public static void main(String[] args) 
	{
		P4Customer obj1= new P4Customer("John Doe",7000);
		obj1.displayDetails();
		P4CardType obj2= new P4CardType();
		obj2.getCardTypes(obj1.getMonthlySpending());
		System.out.println("card type :"+obj2.getCardName());
	}
}
