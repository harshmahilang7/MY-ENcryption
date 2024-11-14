/*
Q-1)
------

Employee Data, num of projects and increment salary based on number of projects
-------------------------------------------------------------------------------------------------------

Create a BLC class Employee :

Instance Variables :

private String firstName

private String lastName

private int employeeId

private double salary

private int noOfProject


Create seter method to intialize the value for all instance variable.

Implement calculateSalary() method that will add extra ammount in salary based on NoOfProject by using following criteria.


NoOfProject is more than 5 and less that 10 then add 5000.

NoOfProject is more than 10 and less that 20 then add 10000.

NoOfProject is more than 20 then add 15000. 	


Take one more method to display the details of employe with the salary.

Method Name :displayEmployeeDetails()
Return Type: void

here we print the Employee class members to display employee details.


Take an ELC class Tester to test your logic.

in this class take a main method and instantiate the Employee

Use the setter method to intialize the data members , and call the calculatesalary method to update the salary based on project.

call the displayEmployeeDetails() method and print all the details .

*/
class poneBlc
{
	private String firstName;
	private String lastName;
	private int employeeId;
	private double salary;
	private int noOfProject;
	public void setFirstName(String firstName)
	{
		this.firstName=firstName;
	}
	public void setLastName(String lastName)
	{
		this.lastName=lastName;
	}
	public void setEmployeeId(int employeeId)
	{
		this.employeeId=employeeId;
	}
	public void setSalary(double salary)
	{
		this.salary=salary;
	}
	public void setNoOfProject(int noOfProject)
	{
		this.noOfProject=noOfProject;
	}
	
	public void calculateSalary()
	{
		if (noOfProject>=5&&noOfProject<=10)
		{
			salary+=5000;
		}
		else if(noOfProject>=11&&noOfProject<=20)
		{
			salary+=10000;
		}
		else if(noOfProject>=21)
		{
			salary+=15000;
		}
	}
	public void displayEmployeeDetails()
	{
		System.out.println("firstName : "+firstName);
		System.out.println("lastName : "+lastName);
		System.out.println("employeeId : "+employeeId);
		System.out.println("salary : "+salary);
		System.out.println("noOfProject : "+noOfProject);
		
	}

}

