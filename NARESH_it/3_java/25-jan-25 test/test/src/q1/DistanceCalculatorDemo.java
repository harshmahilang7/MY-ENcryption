package q1;

import java.util.Scanner;

public class DistanceCalculatorDemo {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		try {
			System.out.println("enter the x1");
			int x1=sc.nextInt();
			System.out.println("enter the x2");
			int x2=sc.nextInt();
			System.out.println("enter the y1");
			int y1=sc.nextInt();
			System.out.println("enter the y2");
			int y2=sc.nextInt();

			double res= Math.sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
			System.out.println("The distance between the two points is: "+res);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println(e);
			System.out.println(e.toString());
			System.out.println(e.getMessage());
			e.printStackTrace();
		}

	}

}
