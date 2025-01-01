interface Bank
{
	void deposit(double amount);   // public + abstract
	void withdraw(double amount);  // public + abstract
}

class Customer implements Bank
{
	protected double balance;

	public Customer(double balance) 
	{
		super();
		this.balance = balance;
	}

	@Override
	public void deposit(double amount) 
	{
		if(amount <=0)
		{
			System.err.println("Amount can't be deposited");
			System.exit(0);
		}
		else
		{
			this.balance = this.balance + amount;
			System.out.println("Balance after deposit :"+this.balance);
		}
		
	}

	@Override
	public void withdraw(double amount) 
	{
		if(amount > this.balance)
		{
			System.err.println("Insufficient Balance!!");
			System.exit(0);
		}
		else
		{
			this.balance = this.balance - amount;
			System.out.println("Amount after Witdraw is :"+this.balance);
		}		
	}
	
	public double getCurrentBalance()
	{
		return this.balance;
	}
}

public class InterfaceDemo2 {

	public static void main(String[] args) 
	{
		Customer scott = new Customer(1000);
        System.out.println("Current Balance is :"+scott.getCurrentBalance());
        scott.deposit(1000);
        scott.withdraw(500);
	}

}