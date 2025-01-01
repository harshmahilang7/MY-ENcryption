package Aggregation;
public class AggregationDemo {

	public static void main(String[] args) 
	{
		College clg = new College("VIT", "Vellore");
		
		Student s1 = new Student(1, "Scott", 450, clg);
		System.out.println(s1);

		Student s2 = new Student(2, "Smith", 452, clg);
		System.out.println(s2);
	}

}
