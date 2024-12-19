package day36;

public class SavingsAccount extends BankAccount {
	protected double interestRate;

	public SavingsAccount(String accountHolderName, String accountNumber, double balance, double interestRate) {
		super(accountHolderName, accountNumber, balance);
		this.interestRate = interestRate;
	}
	
	//
	//1) Method Name        : calculateInterest()
	//Argument        : No Argument
	//Return Type        : void
	//Access modifier    : public
	//In this method write a logic to calculate interest rate on Saving Account.
	
	@Override
	public void calculateInterst()
	{
		double intr=balance*interestRate;
		System.out.println("interest rate "+intr);
	}
	
	
}
