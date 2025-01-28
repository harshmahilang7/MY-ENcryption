package q2;

public class ATM {
	private double accountBalance;
	private String accountNumber;
	public ATM(double accountBalance, String accountNumber) {
		super();
		this.accountBalance = accountBalance;
		this.accountNumber = accountNumber;
	}

	void depost(double amount)
	{
		if(amount<=0)
		{
			throw new IllegalArgumentException("Deposit amount must be positive");
		}
		else
		accountBalance+=amount;
	}
	void withdraw(double amount) throws InsufficientBalanceException
	{
		if(amount<=0)
		{
			throw new IllegalArgumentException("Withdrawal amount must be positive");
		}
		if(amount>accountBalance)
		{
			throw new InsufficientBalanceException("insufficient balance during withdrawals");
		}
		else
			accountBalance-=amount;
	}

	public double getAccountBalance() {
		return accountBalance;
	}

	public void setAccountBalance(double accountBalance) {
		this.accountBalance = accountBalance;
	}

	public String getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(String accountNumber) {
		this.accountNumber = accountNumber;
	}

	public static void validateAccount(String accountNumber) throws InvalidAccountException
	{
		if(accountNumber==null||accountNumber.length()!=10)
		{
			throw new InvalidAccountException("Invalid account number.");
		}
	}



}
