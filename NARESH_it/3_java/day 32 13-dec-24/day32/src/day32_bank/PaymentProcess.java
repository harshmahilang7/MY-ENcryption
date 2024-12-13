package day32_bank;

import java.util.Scanner;

public class PaymentProcess {

	public static void main(String[] args) {
		Payment payment = new Payment();
		// TODO Auto-generated method stub
		System.out.println("Payment Menu");
		System.out.println("Please select any one Payment Method from the Menu :");
		System.out.println("\t\t 1) Payment by using Cash ");
		System.out.println("\t\t 2) Payment by using Credit Card ");
		System.out.println("\t\t 3) Payment by using Debit Card ");
		Scanner sc = new Scanner(System.in);
		int ch = sc.nextInt();
		switch (ch) {
		case 1:
			System.out.println("enter the ammount");
			double amount = sc.nextDouble();
			payment.makePayment(amount);
			System.out.println("Payment Successful!");
			break;
		case 2:
			System.out.println("enter the ammount");
			double a = sc.nextDouble();
			System.out.println("enter the Credit Card ");
			String c = sc.next();
			
			System.out.println("Processing payment via Credit Card...");
			payment.makePayment("vijay",c,a);
		//   Card Holder: RaviShankar
		  	System.out.println(" Amount Paid RS :"+a);
		   System.out.println("Payment Successful!");

			break;
		case 3:
			System.out.println("enter the Debit Card ");
			String d = sc.next();
			System.out.println("enter the ammount");
			double am = sc.nextDouble();
			System.out.println("Processing payment via Debit Card...");
			payment.makePayment(d,am);
			System.out.println(" Amount Paid RS :"+am);
			System.out.println("Payment Successful!");
			break;

		default:
			System.out.println("you have to pay bu gpay");
			break;
		}
		sc.close();

	}


}
