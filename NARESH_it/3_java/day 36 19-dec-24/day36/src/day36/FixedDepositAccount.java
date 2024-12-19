package day36;

public class FixedDepositAccount extends BankAccount {
	protected double interestRate;

	public FixedDepositAccount(String accountHolderName, String accountNumber, double balance, double interestRate) {
		super(accountHolderName, accountNumber, balance);
		this.interestRate = interestRate;
	}
	
	@Override
	public void calculateInterst()
	{
		double intr=balance*interestRate*1;
		System.out.println("interest rate "+intr);
	}
	

}
