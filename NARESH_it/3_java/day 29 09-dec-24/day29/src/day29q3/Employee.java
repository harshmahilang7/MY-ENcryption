package day29q3;


//Acess modifier :private for all varriables
//
//Implement three constructors:
//
//One for an hourly employee that accepts hoursWorked and hourlyRate.
//
//One for a salaried employee that accepts annualSalary.
//
//One for a commission employee that accepts salesAmount and commissionRate.
//
//Methods :
//------------
//method name 	:calculateSalary()
//Return type 	        :double
//Acess Modifier	:public
//
// ->for calculating the salary of an hourly employee.
//
//method name 	:calculateSalary(double annualSalary)
//Return type 	        :double
//Acess Modifier	:public
//
//-> for calculating the salary of a salaried employee.
//
//method name 	:calculateSalary(double salesAmount, double commissionRate)
//Return type 	        :double
//Acess Modifier	:public
//
//->for calculating the commission of a commission-based employee.
//
//Create a Tester Class(ELC Class) Create instances of each type of employee.
//Calculate and display the salary for each employee type using the appropriate method.
public class Employee {
	private double hoursWorked;
	private double hourlyRate ;
	private double annualSalary;
    private double salesAmount  ;
    private int commissionRate;
	public Employee(double hoursWorked, double hourlyRate) {
		super();
		this.hoursWorked = hoursWorked;
		this.hourlyRate = hourlyRate;


	}
	public Employee(double annualSalary) {
		super();
		this.annualSalary = annualSalary;
	}
	public Employee(int commissionRate, double salesAmount) {
		super();
		this.commissionRate = commissionRate;
		this.salesAmount = salesAmount;
	}


	//Return type 	        :double
	//Acess Modifier	:public
//	for calculating the salary of an hourly employee.
	public double calculateSalary()
	{
		return this.hoursWorked*this.hourlyRate;

	}


	//method name 	:calculateSalary(double annualSalary)
	//Return type 	        :double
	//Acess Modifier	:public
	//
	//-> for calculating the salary of a salaried employee.
	public double calculateSalary(double annualSalary)
	{
		return annualSalary/12;
	}

	//method name 	:calculateSalary(double salesAmount, double commissionRate)
	//Return type 	        :double
	//Acess Modifier	:public
	//
	//->for calculating the commission of a commission-based employee.
	public double calculateSalary(double salesAmount, double commissionRate)
	{
		return salesAmount*commissionRate;
	}
	@Override
	public String toString() {
		return "Employee [hoursWorked=" + hoursWorked + ", hourlyRate=" + hourlyRate + ", annualSalary=" + annualSalary
				+ ", salesAmount=" + salesAmount + ", commissionRate=" + commissionRate + "]";
	}








}
