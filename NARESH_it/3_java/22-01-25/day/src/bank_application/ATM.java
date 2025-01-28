package bank_application;

import java.util.Scanner;

import costom_exception.*;

public class ATM {

	public static void main(String[] args) {
		BankAccount A1= new BankAccount(9981554165L, 60000);
		Customer c1=new Customer("harsh", A1);
		Customer c2=new Customer("vijay", A1);

//		System.out.println(c2.getAccount());

		BankAccount A2= new BankAccount(91234789552L, 10000);
		Customer c3=new Customer("Avinash chodu", A2);
		BankAccount B4=null;

//		System.out.println(c3.getAccount());

		Scanner sc=new Scanner(System.in);
		System.out.println("Select an option :");
		System.out.println("1. Deposit");
		System.out.println("2. Withdraw");
		System.out.println("3. Transfer");
		System.out.println("4. Loan Application");
		System.out.println("5. Check Balance");
		System.out.println("6. Exit");
		int inp=sc.nextInt();
		switch (inp) {
		case 1:
			System.out.println("Deposit");
			try(sc) {
				System.out.println("enter the amount");
				int am=sc.nextInt();
				A1.deposit(am);
				System.out.println(A1.getBalance());
				System.out.println(c2.getAccount());
			}
			catch (InvalidAmountException e) {
				System.err.println("invalid amount ");
			}
			break;
		case 2:
			System.out.println("Withdraw");
			try(sc)
			{
				System.out.println("enter the amount");
				int am=sc.nextInt();
				A1.withdraw(am);
				System.out.println(A1.getBalance());
				System.out.println(c1.getAccount());
			}
			catch (InsufficientFundsException | InvalidAmountException e)
			{
				if (e instanceof  InsufficientFundsException)
				{
					System.out.println("Insufficient Funds in acount ");
				}
				else if(e instanceof InvalidAmountException)
				{
					System.out.println("Invalid Amount Entered ");
				}
			}
			break;
		case 3:
			System.out.println("Transfer");

			try(sc){
				System.out.println("enter the amount");
				int am=sc.nextInt();
				A1.transfer(A2, am);
				System.out.println(c2.getAccount());
				System.out.println(c3.getAccount());
			}
			catch (InvalidAmountException | InsufficientFundsException | AccountNotFoundException e) {
				e.printStackTrace();
			}
			break;
		case 4:
			System.out.println("Loan Application");
			System.out.println("enter the amount");
			int am=sc.nextInt();
			try(sc) {
				A1.applyForLoan(am);
			}
			catch (LoanNotAllowedException | InvalidAmountException e)
			{
				if (e instanceof  LoanNotAllowedException)
				{
					System.out.println("Loan Not Allowed greater then 50000 ");
				}
				else if(e instanceof InvalidAmountException)
				{
					System.out.println("Invalid Amount Entered ");
				}
			}
			System.out.println(c2.getAccount());
			break;
		case 5:
			System.out.println("Check Balance");
			System.out.println(c2.getAccount());
			break;

		default:
			System.out.println("retry....");
			break;
		}
	}

}
