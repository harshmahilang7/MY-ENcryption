package day37;

public class Customer {
	protected  String  name;
	double total;

	public Customer(String name) {
		super();
		if(name==null)
		{
			System.err.println(" name cant be null");
		}
		else
		{
			this.name = name;
			
		}
	}
//	
//	1) Method Name        : calculateBill()
//	Argument        : One argument of type double var args [double... prices]
//	Return Type        : void
//	Access modifier    : public
//	In this method using var args receive item price, Give an error message and exit, if
//	Item price is negative, Calculate the total bill by adding all the item price, display
//	all the details of customer name, total cost, Discount
	
	
	public void calculateBill(double... prices)
	{
		
		for (int i = 0; i < prices.length; i++) {
			if(prices[i]<=0)
			{
				System.err.println("itemPrice is negative given an error message.");
				break;
			}
			else
			{
				this.total+=prices[i];
			}
		}
	}
//	
}
