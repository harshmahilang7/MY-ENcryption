package q2;


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
public class EmployeeBonusTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Employee e1=new Employee();
		e1.setEmployeeName("harsh");
		e1.setPerformanceRating(5);
		e1.setBasicSalary(100);
		System.out.println(e1.toString());
		Bonus obj2=Bonus.calculateBonus(e1);
		System.out.println(obj2.getBonusAmount());		
		

	}

}
