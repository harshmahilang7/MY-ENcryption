package com.day17.ques2;

import java.util.Scanner;

//Question : 2
//---------------
//Create an Employee class with the following attributes:
//
//id (int): The unique identifier for each employee.
//name (String): The name of the employee.
//salary (double): The base salary of the employee.
//department (String): The department to which the employee belongs.
//In addition to these attributes, implement the following:
//
//Static Method for Employee Creation: Add a static method named createEmployee() in the Employee class. This method should:
//
//Prompt the user to enter values for id, name, salary, and department.
//Initialize a new Employee object with the provided values.
//Return the created Employee object.


//Business Logic Method: Add a method calculateAnnualSalary() that:
//
//Calculates and returns the annual salary of the employee based on their salary (monthly salary).
//Adds a bonus based on the department:
//Sales: 10% bonus of annual salary.
//Engineering: 15% bonus of annual salary.
//HR: 8% bonus of annual salary.
//Other: 5% bonus of annual salary.


//Implement toString method  to return the employee's details in this format: "ID: <id>, Name: <name>, Department: <department>, Monthly Salary: <salary>, Annual Salary (with Bonus): <calculated_annual_salary>".
//
//Create a ELC class TestEmployee:
//Main Method:
//
//Ask the user how many Employee objects they want to create.
//Use a loop to call createEmployee() to create the specified number of employees, storing each in an array.
//After all employees are created, use another loop to display each employee's details, including the calculated annual salary with bonus.
public class Employee {
	int id;
	String name;
	double salary;
	String department;
	double annualSalary;
	
	public static Employee createEmployee()
	{
		Employee obj1=new Employee();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the id");
		obj1.id=sc.nextInt();
		System.out.println("enter the name");
		obj1.name=sc.nextLine();
		obj1.name=sc.nextLine();
		System.out.println("enter the Salary");
		obj1.salary=sc.nextDouble();
		System.out.println("enter the Department");
		obj1.department=sc.nextLine();
		obj1.department=sc.nextLine();
		return obj1;
	}
	
	

	//Business Logic Method: Add a method calculateAnnualSalary() that:
	//
	//Calculates and returns the annual salary of the employee based on their salary (monthly salary).
	//Adds a bonus based on the department:
	//Sales: 10% bonus of annual salary.
	//Engineering: 15% bonus of annual salary.
	//HR: 8% bonus of annual salary.
	//Other: 5% bonus of annual salary.
	public double calculateAnnualSalary()
	{
		annualSalary=salary*12;
		double bonus=0;
		if(department.equals("Sales"))
				{
			bonus=annualSalary/100*10;
				}
		else if(department.equals("Engineering"))
				{
				bonus=annualSalary/100*15;
				}
		else if(department.equals("HR"))
				{
			bonus=annualSalary/100*8;
				}
		else if(department.equals("Other"))
				{
			bonus=annualSalary/100*5;
				}
		annualSalary+=bonus;
		return annualSalary;
	}



	@Override
	public String toString() {
		return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + ", department=" + department
				+ ", annualSalary=" + annualSalary + "]";
	}
	
	

}
