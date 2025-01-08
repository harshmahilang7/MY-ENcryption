package EqualsObjectComparison;

import java.util.Objects;

class Student
{
	private Integer studentId;
	private String studentName;
	public Student(Integer studentId, String studentName) {
		super();
		this.studentId = studentId;
		this.studentName = studentName;
	}
	@Override
	public String toString() {
		return "Student [studentId=" + studentId + ", studentName=" + studentName + "]";
	}
	public Integer getStudentId() {
		return studentId;
	}
	public void setStudentId(Integer studentId) {
		this.studentId = studentId;
	}
	public String getStudentName() {
		return studentName;
	}
	public void setStudentName(String studentName) {
		this.studentName = studentName;
	}
	@Override
	public int hashCode() {
		return Objects.hash(studentId, studentName);
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		return Objects.equals(studentId, other.studentId) && Objects.equals(studentName, other.studentName);
	}
	
	
	
	
	
	
		
}

public class EqualsObjectComparison {

	public static void main(String[] args) 
	{
		Student s1 = new Student(111, "Raj");
		Student s2 = new Student(111, "Raj");
		
		System.out.println(s1==s2); //false
		
		System.out.println(s1.equals(s2)); //true (Overridden Method)

	}

}