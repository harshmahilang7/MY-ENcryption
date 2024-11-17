package q2;

//Ques 2:
//----------
//Employee Bonus Calculation Based on Performance Rating
//Classes:
//Employee (BLC):
//
//Attributes (all private):
//
//employeeName (String) - The name of the employee.
//basicSalary (double) - The basic salary of the employee.
//performanceRating (int) - The performance rating of the employee (1 to 5).
//
//Methods:
//setEmployeeName(String name): void - Sets the employee's name.
//setBasicSalary(double salary): void - Sets the basic salary.
//setPerformanceRating(int rating): void - Sets the performance rating.
//getEmployeeName(): String - Returns the employee's name.
//getBasicSalary(): double - Returns the basic salary.
//getPerformanceRating(): int - Returns the performance rating.
//displayEmployeeDetails(): void - Displays the employee's details, including their name, basic salary, and performance rating.
//
//Bonus (BLC):
//
//Attributes (all private):
//bonusAmount (double) - The calculated bonus amount.
//
//Methods:
//getBonusAmount(): double - Returns the bonus amount.
//calculateBonus(Employee employee): Bonus - A static method that takes an Employee object as a parameter and returns a Bonus object. The bonus is calculated based on the performanceRating.
//
//Logic:
//Performance Rating 1: Bonus = 5% of basic salary
//Performance Rating 2: Bonus = 10% of basic salary
//Performance Rating 3: Bonus = 15% of basic salary
//Performance Rating 4: Bonus = 20% of basic salary
//Performance Rating 5: Bonus = 25% of basic salary
//
//EmployeeBonusTest (ELC):
//In the main method:
//Create an instance of the Employee class.
//Set the employee's name, basic salary, and performance rating using setter methods.
//Call the displayEmployeeDetails() method to display the employee's details.
//Call the calculateBonus(Employee employee) method and print the bonus amount.
//
//Example:
//Employee: Name = "John Doe", Basic Salary = 50000, Performance Rating = 4
//Bonus Amount: 20% of basic salary

public class Employee {
	
	String employeeName;
	double basicSalary;
	int performanceRating;
	public String getEmployeeName() {
		return employeeName;
	}
	public void setEmployeeName(String employeeName) {
		this.employeeName = employeeName;
	}
	public double getBasicSalary() {
		return basicSalary;
	}
	public void setBasicSalary(double basicSalary) {
		this.basicSalary = basicSalary;
	}
	public int getPerformanceRating() {
		return performanceRating;
	}
	public void setPerformanceRating(int performanceRating) {
		this.performanceRating = performanceRating;
	}
	@Override
	public String toString() {
		return "Employee [employeeName=" + employeeName + ", basicSalary=" + basicSalary + ", performanceRating="
				+ performanceRating + "]";
	}
	
	
	
	

}
