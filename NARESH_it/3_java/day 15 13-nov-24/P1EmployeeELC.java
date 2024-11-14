class P1EmployeeELC 
{
	public static void main(String[] args) 
	{
		P2EmployeeBLC obj1=new P2EmployeeBLC("shaktiman",30,"Sales",50000,"good");
		System.out.println(obj1.getName());
		System.out.println(obj1.getAge());
		System.out.println(obj1.getDepartment());
		System.out.println(obj1.getSalary());
		System.out.println(obj1.getPerformance());
		
		obj1.updateSalary();
		System.out.println("----------------");
		System.out.println(obj1.getName());
		System.out.println(obj1.getAge());
		System.out.println(obj1.getDepartment());
		System.out.println(obj1.getSalary());
		System.out.println(obj1.getPerformance());
		
		
	}
}
