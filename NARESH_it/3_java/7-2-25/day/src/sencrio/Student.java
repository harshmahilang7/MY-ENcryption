package sencrio;

import java.util.Arrays;

public class Student {
//
//
//Attributes:
//
//-> name (String): Name of the student.
//
//-> institute (EducationInstitute): Reference to the education institute where the student interacts.
//
//
//
//Methods:
//
//-> Student(String name, EducationInstitute institute): Constructor to initialize the student with their name and the education institute reference.
//
//-> viewCoursesAndFees(): Displays the available courses and their fees.
//
//-> viewOffers(): Displays the ongoing offers.
//
//-> enrollInCourse(int courseId): Enrolls the student in the specified
//	course using the education institute’s enrollment process.

	EducationInstitute institute;
	String name;

	public Student(EducationInstitute institute, String name) {
		super();
		this.institute = institute;
		this.name = name;
	}

	public void viewCoursesAndFees()
	{
		for(int i=0;i<institute.courses.length;i++)
		{
		     System.out.println(institute.courses[i].courseName+"  "+institute.courses[i].corseFee);
		}
	}
	public void viewOffers()
	{
		System.out.println(Arrays.toString(institute.offers));
	}

	public void enrollInCourse(int courseId)
	{

		for(Course co:institute.courses)
		{
			if(co.getCourseId()==courseId)
			{
				System.out.println(name+" has enrolled in the course: "+co.getCourseName());
			}
		}
	}





}
