package q1;

import java.util.ArrayList;
import java.util.List;

record Student(String name, String coures) {
}

public class q3 {
//	List<Student> students =  [("Alice", "Java"),
//	                           ("Bob", "Python"),
//	                           ("Charlie", "Java"),
//	                           ("David", "C++"),
//	                           ("Eve", "JavaScript")];
	public static void main(String[] args) {
		List<Student> students = new ArrayList<Student>();
		students.add(new Student("Alice", "Java"));
		students.add(new Student("Bob", "Python"));
		students.add(new Student("Charlie", "Java"));
		students.add(new Student("David", "C++"));
		students.add(new Student("Eve", "JavaScript"));

//		students.stream().map(
//				str ->{
//					if(str.coures()=="Java")
//					{
//						return str.name();
//					}
//					return null;
//	
//		}).forEach(str -> System.out.println(str));

		students.stream().filter(str -> "Java".equals(str.coures())).map(Student::name).forEach(str -> System.out.println(str));
}
}