package day36;

import java.util.Scanner;

public class elc {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		 Please select the Account Type :
//		        1) Saving Account
//		        2) Current Account
//		        3) Fixed Deposit Account

		System.out.println("Please select the Account Type :");
		System.out.println(" 1) Saving Account");
		System.out.println(" 2) Current Account");
		System.out.println(" 3) Fixed Deposit Account");
		BankAccount s1=null;
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		switch (a) {
		case 1:
			s1=new SavingsAccount("harsh", "12345", 10, 4.0);
			s1.calculateInterst();
			break;
		case 2:
			s1=new CurrentAccount("dastan", "12345", 10, 10000);
			s1.calculateInterst();
			CurrentAccount p= (CurrentAccount)s1;
			p.checkOverdraftLimit();
			break;
		case 3:
			s1=new FixedDepositAccount("dastan", "12345", 10, 10000);
			s1.calculateInterst();
			break;

		default:
			System.err.println("not out");
			break;
		}
		s1.displayAccountDetails();

	}

}
