package program1;

//Write a Program on OOPs to define Employee class properties and behaviour.
//
//properties :
//employeeId : int
//employeeName : String
//employeeSalary : double
//
//Initialize these properties with the help of Method parameter using Scanner class in ELC class.
//
//behavior:
//setEmployeeData(int Id ,String Name,double Salary) : public void
//getEmployeeData() : public void


public class blc {
	int employeeId;
	String emloyeeName;
	double employeeSalary;
	
	public void setEmployeeData(int Id ,String Name,double Salary)
	{
		employeeId=Id;
		emloyeeName=Name;
		employeeSalary=Salary;
	}
	public void getEmployeeData()
	{
		System.out.println("employeeId "+employeeId);
		System.out.println("emloyeeName "+employeeId);
		System.out.println("employeeSalary "+employeeSalary);
	}
	
	
	

}
