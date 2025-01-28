package bank_application;

import costom_exception.*;
public interface Bank {

//		Method name: deposit
//		return type : void
//		parameters : double amount
//		throws InvalidAmountException
//		Deposits the specified amount into the account. Throws InvalidAmountException if the amount is less than or equal to zero.

		 void deposit(double amount)throws InvalidAmountException;

//		Method name: withdraw
//		return type : void
//		parameters : double amount
//		throws InsufficientFundsException, InvalidAmountException:
//		Withdraws the specified amount from the account. Throws InsufficientFundsException if the amount is greater than the account balance. Throws InvalidAmountException if the amount is less than or equal to zero.

		 void withdraw(double amount)throws InsufficientFundsException;
//
//		Method name: transfer
//		return type : void
//		parameters : (BankAccount toAccount, double amount)
//		throws InsufficientFundsException, AccountNotFoundException, InvalidAmountException:
//		Transfers the specified amount to another account.
//		Throws InsufficientFundsException if the amount is greater than the account balance.
//      Throws AccountNotFoundException if the target account is not found.
//		Throws InvalidAmountException if the amount is less than or equal to zero.



		void transfer (BankAccount toAccount, double amount)throws InsufficientFundsException, AccountNotFoundException, InvalidAmountException;
//
//
//		Method name: applyForLoan
//		return type : void
//		parameters : (double amount)
//		throws LoanNotAllowedException, InvalidAmountException:
//		Applies for a loan of the specified amount(50000).
//		Throws LoanNotAllowedException if the loan amount exceeds the allowed limit(50000) or
//		if the balance is less than specified amount(50000). Throws InvalidAmountException if the amount is less than or equal to zero.


		void applyForLoan (double amount)throws LoanNotAllowedException, InvalidAmountException;



//		Method name: getBalance
//		return type : double
//		Returns the current balance of the account.

		double getBalance();


}
