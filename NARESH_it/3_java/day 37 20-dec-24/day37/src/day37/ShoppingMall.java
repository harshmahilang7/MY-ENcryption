package day37;

import java.util.Scanner;

public class ShoppingMall {
	public static void generateBill(Customer cust, double... prices)
	{
		cust.calculateBill(prices);
		System.out.println(cust);
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Please select the Customer Type to get additional Discount :");
		System.out.println("1) General Customer");
		System.out.println("2) Prime Customer");
		System.out.println("3) VIP Customer");
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		switch (a) {
		case 1:
		{
			System.out.println("enter the name ");
			String name=sc.nextLine();
			name=sc.nextLine();
			Customer c1=new GeneralCustomer(name);
			System.out.println("no of item");
			int end=sc.nextInt();
			
			double[] prices= {-10.0,20.0,40.0,30.0};
			generateBill(c1,prices);
			
			break;
		}
		case 2:
		{
			System.out.println("enter the name ");
			String name=sc.nextLine();
			name=sc.nextLine();
			System.out.println("enter the discountRate");
			double discountRate=sc.nextDouble();
			Customer c1=new PrimeCustomer(name, discountRate);
			double[] prices= {10.0,20.0,40.0,30.0};
			generateBill(c1,prices);
		}
		case 3:
		{
			System.out.println("enter the name ");
			String name=sc.nextLine();
			name=sc.nextLine();
			System.out.println("enter the discountRate");
			double discountRate=sc.nextDouble();
			Customer c1=new VIPCustomer(name, discountRate);
			double[] prices= {10.0,20.0,40.0,30.0};
			generateBill(c1,prices);
			
		}
		default:
			break;
		}
	      
	      
		
		
	}

	
	
}
