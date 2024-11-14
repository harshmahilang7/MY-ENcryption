/*-2)
------
Create a BLC class StudentGradeCalculator :

Instance Variables:

studentName  : private String
marks              : private int
grade               : private char


Setter Methods:

Define setter methods for studentName and marks to initialize these fields.

Methods:

Method Name: 

calculateGrade()

Access Modifier: public
Return Type: void

Description: This method calculates the student's grade based on the marks field and assigns a grade based on the following criteria:

Marks       Grade
> 90         A
>= 75        B
>= 60        C
< 60         D

Method Name: displayStudentDetails

Access Modifier: public
Return Type: void
Description: This method prints the student's name, marks, and calculated grade.

Main Method:

Within the main method, create an instance of StudentGradeCalculator.
Use the setter methods to initialize the student's name and marks.

Call calculateGrade to compute the grade based on the initialized marks.

Finally, use displayStudentDetails to print the student’s name, marks, and grade.
*/

class ptwoBlc
{
	private String studentName;
	private int marks;
	private char grade;
	
	public void setStudentName(String studentName)
	{
		this.studentName=studentName;
	}
	public void setMarks(int marks)
	{
		this.marks=marks;
	}
	
	public void calculateGrade()
	{
		if (marks>=90&&marks<=100)
		{
			grade='A';
		}
		else if(marks>75&&marks<90)
		{
			grade='B';
		}
		else if(marks>=60&&marks<=75)
		{
			grade='C';
		}
		else if(marks<60)
		{
			grade='D';
		}
	}
	public void displayStudentDetails()
	{
		System.out.println("studentName : "+studentName);
		System.out.println("marks : "+marks);
		System.out.println("grade : "+grade);
	}

}

