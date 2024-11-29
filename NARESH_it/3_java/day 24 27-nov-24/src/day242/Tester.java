package day242;

import java.util.Scanner;

public class Tester {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		studentId: 1
//      name: "John Smith"
//      examFee: 25000.0
//      Payment Amount: 25000.0
//
//      2. For DayScholar Class:
//      studentId: 2
//      name: "Brian Lara"
//      examFee: 25000.0
//      transportFee: 5000.0
//      Payment Amount: 37000.0
//
//      3. For Hosteller Class:
//      studentId: 3
//      name: "Virat Kohli"
//      examFee: 25000.0
//      hostelFee: 8000.0
//      Payment Amount: 33000.0

		Scanner sc =new Scanner(System.in);

		Student s1 =new Student(1, "John Smith", 25000.0) ;
		System.out.println(s1);
		System.out.print("enter the payment amount");
		double amount=sc.nextDouble();

		amount=amount-s1.payFee();
		if(amount>0)
		{
			System.out.println("extra money paid");
		}
		else if(amount<0)
		{
			System.out.println("more money paid");

		}
		else
		{
			System.out.println("amount is clear");
		}
//		System.out.println(s1.payFee());
		System.out.println();

		DayScholar d1 =new DayScholar(2, "Brian Lara", 25000.0, 5000.0);

		System.out.println(d1);

		Hosteller h1=new Hosteller(3, "Virat Kohli", 25000.0, 8000.0);
		System.out.println(h1);

	}


}
