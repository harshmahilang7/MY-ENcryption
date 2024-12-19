package day36;

public class BankAccount {
     protected String accountHolderName;
     protected String accountNumber;
     protected double balance;
	 public static final String IFSC_CODE="ammerpet";
	public BankAccount(String accountHolderName, String accountNumber, double balance) {
		super();
		if(accountHolderName==null)
		{
			System.err.println("null invalid");
		}
		else
		{
			this.accountHolderName = accountHolderName;
			
		}
		if(accountNumber==null)
		{
			System.err.println("accountNumber invalid");
		}
		else
		{
			this.accountNumber = accountNumber;
			
		}
		if(Integer.parseInt(accountNumber)<0)
		{
			System.err.println("accountNumber invalid");
		}
		else
		{
			this.balance = balance;
			
		}
		

	}

	
	//1) Method Name        : calculateInterest()
	//Argument        : No Argument
	//Return Type        : void
	//Access modifier    : public
	//In this method write a generic message regarding Bank interest Calculation.
	//
	//2) Method Name        : displayAccountDetails()
	//Argument        : No Argument
	//Return Type        : void
	//Access modifier    : public
	//In this method display customer records [See the Test cases for more details in the below
	//of this question]
	
	public void calculateInterst()
	{
		System.out.println(" generic message regarding Bank interest Calculation.");
	}
	public void displayAccountDetails()
	{
		System.out.println("accountHolderName : "+accountHolderName+"\naccountNumber: "+accountNumber+"\nbalance : "+balance+"\nIFSC_CODE"+IFSC_CODE);
	}
	

	
	
	
	
	
}
