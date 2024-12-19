package day36;

public class CurrentAccount extends BankAccount  {
	

	//
	//Field :
	//protected double overdraftLimit = 5000.0;
	//
	//Take a parameterized constructor to initialize super class properties.
	//
	//Method :
	//
	//1) Method Name        : calculateInterest()
	//Argument        : No Argument
	//Return Type        : void
	//Access modifier    : public
	//In this method write a statement that Current accounts do not earn interest.
	//
	//2) Method Name        : checkOverdraftLimit()
	//Argument        : No Argument
	//Return Type        : void
	//Access modifier    : public
	//In this method print overdraftLimit amount.
	//
	
	protected double overdraftLimit ;
	
	
	public CurrentAccount(String accountHolderName, String accountNumber, double balance,double overdraftLimit) {
		super(accountHolderName, accountNumber, balance);
		this.overdraftLimit=overdraftLimit;
	}
	
	@Override
	public void calculateInterst()
	{
		System.out.println("Current accounts do not earn interest.");
	}
	
	public void checkOverdraftLimit()
	{
		System.out.println("overdraftLimit amount : "+overdraftLimit);
	}
	
	
}
