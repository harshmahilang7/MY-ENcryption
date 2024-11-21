package com.day17.ques2;

import java.util.Scanner;

//Create a ELC class TestEmployee:
//Main Method:
//
//Ask the user how many Employee objects they want to create.
//Use a loop to call createEmployee() to create the specified number of employees, storing each in an array.
//After all employees are created, use another loop to display each employee's details, including the calculated annual salary with bonus.
public class TestEmployee {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the number of object");
		int no_of_obj=sc.nextInt();
		for (int i = 0; i < no_of_obj; i++) {
			Employee obj2=Employee.createEmployee();
			obj2.calculateAnnualSalary();
			System.out.println(obj2);
			
		}
		sc.close();
	}

}
