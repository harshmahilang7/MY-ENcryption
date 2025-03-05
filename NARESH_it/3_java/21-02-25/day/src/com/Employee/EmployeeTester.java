package com.Employee;

public class EmployeeTester {

	public static void main(String[] args) {

//		Employee e1 =new Employee("dastna",88,10000D);
//		Employee e2 =new Employee("vijay",118,20000D);
//		Employee e3 =new Employee("shailander",189,15000D);

		Manager m1= new Manager("dastan",88,10000D,ManagerType.HR);
		Manager m2= new Manager("vijay",118,20000D,ManagerType.SALES);
		Manager m3= new Manager("shailander",189,15000D,ManagerType.HR);
//		m1.setSalary(10000);
//		System.out.println(m1.getSalary());
//		m2.setSalary(20000D);
//		System.out.println(m2.getSalary());


		Clerk c1 =new Clerk("dastan",88,10000D,67, 56);
		c1.setSalary(100);
		c1.setAccuracy(87);
		System.out.println(c1.getSalary());
		c1.setSpeed(87);
		System.out.println(c1.getSalary());
		c1.setAccuracy(87);
		c1.setSpeed(87);
		System.out.println(c1.getSalary());





	}

}
