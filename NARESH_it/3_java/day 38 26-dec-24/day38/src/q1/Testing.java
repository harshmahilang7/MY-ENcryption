package q1;

import java.util.Scanner;

public class Testing {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("enter number");
//		
System.out.printf("1.egg\n2.bread\n");
		int n=sc.nextInt();
		System.out.println("enter proteins");
		double proteins=sc.nextDouble();
		System.out.println("enter fats");
		double fats=sc.nextDouble();
		System.out.println("enter carbs");
		double carbs=sc.nextDouble();
		System.out.println("enter tastyScore");
		double tastyScore=sc.nextDouble();
		
		if(n==1)
		{
			
			Food f1=new Egg(proteins, fats, carbs, tastyScore);
			Egg e1= (Egg)f1;
			System.out.println(e1.getType());
			e1.getMacroNutrients();
			System.out.println(e1.getTastyScore());
			
		}
		else if(n==2)
		{
			Food B1=new Bread(proteins, fats, carbs, tastyScore);
			Bread b1= (Bread)B1;
			System.out.println(b1.getType());
			b1.getMacroNutrients();
			System.out.println(b1.getTastyScore());
		}
		else
			System.out.println("invalid");
	}

}
