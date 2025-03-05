package q1;

import java.io.Serializable;
import java.util.Date;

public class Student implements Serializable {


//	Write a Program in Java to Perform Serialization and De-serialization
//	operation on ArrayList Object.
//	Take a BLC class Student
//	Instance variables
//	studentId – private – Integer
//	studentName – private – String
//	studentFees – private – Double
//	dateOfAdmission – private – Date
//	Take a parameterized constructor to initialize the instance variables
//	Take a Method getStudentObject()
//	Method Name - getStudentObject()
//	Parameter - No Parameter
//	Access Modifier - public and static
//	Return type - Student
//	This method should take the Student data from client, create and
//	return Student object from this method.
//
//	Override toString() method to print Student class properties or
//	variables.
//	Take an ELC class StoreObject
//	Inside the main method create a for loop which will read the Student
//	object with user choice and Store the Student object to a file called
//	Student.txt
//	Take another ELC class RetrieveObject
//	This class will retrieve the Student Object from file and print the
//	Student information data.


	/**
	 *
	 */
	private static final long serialVersionUID = 1L;
	private Integer studentId;
    private String studentName;
    private  Double studentFees;
    private Date dateOfAdmission;
	@Override
	public String toString() {
		return "Student [studentId=" + studentId + ", studentName=" + studentName + ", studentFees=" + studentFees
				+ ", dateOfAdmission=" + dateOfAdmission + "]";
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
	public Double getStudentFees() {
		return studentFees;
	}
	public void setStudentFees(Double studentFees) {
		this.studentFees = studentFees;
	}
	public Date getDateOfAdmission() {
		return dateOfAdmission;
	}
	public void setDateOfAdmission(Date dateOfAdmission) {
		this.dateOfAdmission = dateOfAdmission;
	}
	public Student(Integer studentId, String studentName, Double studentFees, Date dateOfAdmission) {
		super();
		this.studentId = studentId;
		this.studentName = studentName;
		this.studentFees = studentFees;
		this.dateOfAdmission = dateOfAdmission;
	}


	public static Student getStudentObject()
	{

		return new Student(11,"vijay",300D,new Date(29L));
	}




}
