package day18Q1;

public class StudentGradeCalculator {

	public static void main(String[] args) {
		Student s1=new Student("harsh",-400);
		StudentGrade obj1=CalculateStudentGrade.calculateGrade(s1);
		System.out.println(obj1);

	}

	

}
