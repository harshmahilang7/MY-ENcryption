package day19_q1;

import java.util.Scanner;

public class EmployeeDemo {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("enter the num of obj");
		int no_of_obj=sc.nextInt();
		for (int i = 0; i < no_of_obj; i++) 
		{
			Employee obj=Employee.getEmployeeObject();
			System.out.println(obj);
		}
		sc.close();

	}

}
