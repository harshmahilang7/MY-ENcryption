package q1;

import java.util.stream.Stream;

record Student1(String name,Double sal)
{
	
}

//Create a record of Employee with attributes name:(String) and id:(String)
//Given a list of Employee objects with name and salary properties, write a program to filter the list of Employees by salary in who are having salary > 30000 and print the employee names.
public class q6 {
	
	

	public static void main(String[] args) {
		Student1 s1= new Student1("harsh", 30000D);
		Student1 s2= new Student1("harsh", 30000D);
		Student1 s3= new Student1("harsh", 30000D);
		Student1 s4= new Student1("harsh", 30001D);
		
		Stream<Student1> stream= Stream.of(s1,s2,s3,s4);
		stream.filter(s -> s.sal()>30000D).forEach(s -> System.out.println(s));
		
		

	}

}
