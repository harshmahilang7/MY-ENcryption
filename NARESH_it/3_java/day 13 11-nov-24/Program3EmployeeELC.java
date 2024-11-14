class Program3EmployeeELC 
{
	public static void main(String[] args) 
	{
		Program3Employee obj1=new Program3Employee(232, "Naresh Kumar", -1);
		System.out.println(obj1.getEmployeeNumber()+" "+obj1.getEmployeeName()+" "+obj1.getEmployeeSalary());
		
		if(obj1.getEmployeeSalary()>=60000) System.out.println("Employee is a Developer");
		
		else if(obj1.getEmployeeSalary()>=40000&&obj1.getEmployeeSalary()<60000)System.out.println("Employee is a Designer");
		
		else if(obj1.getEmployeeSalary()<40000)System.out.println("Employee is a Tester")
	}
}
