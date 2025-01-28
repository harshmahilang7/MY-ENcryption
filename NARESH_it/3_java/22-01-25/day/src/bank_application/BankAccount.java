package bank_application;

import costom_exception.AccountNotFoundException;
import costom_exception.InsufficientFundsException;
import costom_exception.InvalidAmountException;
import costom_exception.LoanNotAllowedException;

public class BankAccount implements Bank {

	private long accountNumber;
	private double balance;




	@Override
	public String toString() {
		return "BankAccount [accountNumber=" + accountNumber + ", balance=" + balance + "]";
	}

	public BankAccount(long accountNumber, double balance) {
		super();
		this.accountNumber = accountNumber;
		this.balance = balance;
	}

//	Method name: deposit
//	return type : void
//	parameters : double amount
//	throws InvalidAmountException
//	Deposits the specified amount into the account. Throws InvalidAmountException if the amount is less than or equal to zero.
	@Override
	public void deposit(double amount)throws InvalidAmountException
	{
		if(amount<=0)
		{
			throw new InvalidAmountException();
		}
		else
		{
			balance+=amount;
		}

	}


//	Method name: withdraw
//	return type : void
//	parameters : double amount
//	throws InsufficientFundsException, InvalidAmountException:
//	Withdraws the specified amount from the account. Throws InsufficientFundsException if the amount is greater than the account balance. Throws InvalidAmountException if the amount is less than or equal to zero.
	@Override
	public void withdraw(double amount)throws InsufficientFundsException
	{
		if(this.balance<amount)  //Account balance
		{
			throw new InsufficientFundsException();
		}
		else if(amount<=0)
		{
			throw new InvalidAmountException();
		}
		else
		{
			balance-=amount;
		}
	}
//
//	Method name: transfer
//	return type : void
//	parameters : (BankAccount toAccount, double amount)
//	throws InsufficientFundsException, AccountNotFoundException, InvalidAmountException:
//	Transfers the specified amount to another account.
//	Throws InsufficientFundsException if the amount is greater than the account balance.
//  Throws AccountNotFoundException if the target account is not found.
//	Throws InvalidAmountException if the amount is less than or equal to zero.


	@Override
	public void transfer (BankAccount toAccount, double amount)throws InsufficientFundsException, AccountNotFoundException, InvalidAmountException
	{
		if(balance<amount)
		{
			throw new InsufficientFundsException();
		}
		else if(toAccount==null)
		{
			throw new AccountNotFoundException();
		}
		else if(amount<=0)
		{
			throw new InvalidAmountException();
		}
		else
		{
			balance-=amount;
			toAccount.balance+=amount;
		}
	}

//	Method name: applyForLoan
//	return type : void
//	parameters : (double amount)
//	throws LoanNotAllowedException, InvalidAmountException:
//	Applies for a loan of the specified amount(50000).
//	Throws LoanNotAllowedException if the loan amount exceeds the allowed limit(50000) or
//	if the balance is less than specified amount(50000).
//	Throws InvalidAmountException if the amount is less than or equal to zero.

    @Override
	 public void applyForLoan (double amount)throws LoanNotAllowedException, InvalidAmountException
	{
		if(amount>50000|| balance<amount)   //balance)
		{
			throw new LoanNotAllowedException();
		}
		else if(amount<=0)
		{
			throw new InvalidAmountException();
		}
		else
		{
			System.out.println("lone approved");
			balance+=amount;
		}
	}


	@Override
	public double getBalance() {
		return balance;
	}

}
