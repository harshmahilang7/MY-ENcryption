package day22setAq2;

//=============================================
//
//Que 2 :
//=======
//
//Devlop  : Mini Banking Project System
//
//
//Class :Bank
//
//Attributes:
//
//String accountHolderName
//int accountNumber
//double balance
//
//Constructors:
//
//Default Constructor:
//Initializes account details with default values (Unknown, 0, and 0.0 for name, account number, and balance, respectively).
//
//Parameterized Constructor (Name only):
//Initializes the account with the given account holder's name, and default values for account number (0) and balance (0.0).
//
//Parameterized Constructor (All Details):
//Initializes all attributes with provided values.
//
//If the initial balance provided is negative, set the balance to 0.0 and display a warning message.
//
//
//Methods:
//
//void deposit(double amount):
//Adds the specified amount to the current balance.
//Display an appropriate message for invalid deposits (e.g., negative or zero amounts).
//
//void withdraw(double amount):
//Deducts the specified amount from the current balance.
//Display an error message if the withdrawal amount exceeds the balance or is invalid.
//
//void printBalance():
//Prints the account holder's name, account number, and current balance.
//
//Take an ELC class BankApp and inside this main method 
//
//=============================================


public class Bank {
	
	
	String accountHolderName;
	int accountNumber;
	double balance;
	public Bank() {
		super();
		this.accountHolderName = "Unknown";
		this.accountNumber = 0;
		this.balance = 0.0;
	}
	public Bank(String accountHolderName) {
		super();
		this.accountHolderName = accountHolderName;
		this.accountNumber = 0;
		this.balance = 0.0;
	}
	
	
	public Bank(String accountHolderName, int accountNumber, double balance) {
		this();
		this.accountHolderName = accountHolderName;
		this.accountNumber = accountNumber;
		
		if(balance<0)
		{
			System.err.println("balance provided is negative");
			this.balance = 0.0;
		}
		else {
			
			this.balance = balance;
		}
	}
	
	
	void deposit(double amount)
	{
		if(amount<=0)
		{
			System.err.println("balance provided is negative or not zero");
		}
		else
		{
			System.out.println("deposit Sucessfully");
			balance=balance+amount;
			System.out.println("balance : "+balance);
		}
	}
	
	void withdraw(double amount)
	{
		if(amount<=0||amount>balance)
		{
			System.err.println("balance provided is negative or not zero");
		}
		else
		{
			System.out.println("withdraw Sucessfully");
			balance=balance-amount;
			System.out.println("balance : "+balance);
		}
	}
	
	@Override
	public String toString() {
		return "Bank [accountHolderName=" + accountHolderName + ", accountNumber=" + accountNumber + ", balance="
				+ balance + "]";
	}
	
	
	
	
	
	
	
	

}
