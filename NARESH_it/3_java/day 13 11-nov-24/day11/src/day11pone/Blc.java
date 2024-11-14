
//Question-1
//--------------
//Create an Employee class (BLC Class)
//
//Attributes :
//
//names		Return Type
//--------		---------------		
// firstName   	:String   
// lastName     :String  
// employeeId 	:int  
// salary  		:double  
// NoOfProject 	:int 
//
//Access Modifier : private (for all varriables)  
//
//Implement constructors to initialize these properties.
//
//implement calculateSalary() method that will add extra ammount in salary based on NoOfProject.
//
//Return Type       : void
//Access modifier   : public
//
//NoOfProject is more than 5 and less that 10 then add 5000
//NoOfProject is more than 10 and less that 20 then add 10000
//NoOfProject is more than 20 then add 15000
//
//Take another class Tester (ELC Class) which is having main method and instantiate the Employee object and execute the methods.


public class Blc 
{
	private String firstName;
	private String lastName;
	private int employeeId;
	private double salary;
	private int noOfProject;
	
	Blc(String firstName,String lastName,int employeeId,double salary,int noOfProject)
	{
		this.firstName=firstName;
		this.lastName=lastName;
		this.employeeId=employeeId;
		this.salary=salary;
		if(noOfProject<0)
		{
			System.out.println("invalid noOfProject");
		}
		else
		{
			this.noOfProject=noOfProject;
		}
	}
	
	public void calculateSalary()
	{
		if(noOfProject>=5&&noOfProject<10){salary+=5000;}
		else if (noOfProject>=10&&noOfProject<20){salary+=10000;}
		else if (noOfProject>=20){salary+=15000;}
	}
	public void display()
	{
		System.out.println("firstName :"+firstName);
		System.out.println("lastName :"+lastName);
		System.out.println("employeeId :"+employeeId);
		System.out.println("salary :"+salary);
		System.out.println("noOfProject :"+noOfProject);
	}
}
