package sencrio;

public class EducationInstitute {
//	Attributes:
//
//		-> courses (Course[]): An array to store the available courses.
//
//		-> offers (Offer[]): An array to store ongoing offers.
//
//
//
//		Methods:
//
//		-> EducationInstitute(): Constructor to initialize courses and offers.
//
//		-> getCourses(): Returns the array of available courses.
//
//		-> getOffers(): Returns the array of ongoing offers.
//
//		-> enrollStudentInCourse(int courseId, String studentName):
//	Simulates the enrollment process and prints a message when a student -> enrolls in a course.


	Course[] courses;
	Offer[] offers;

	public EducationInstitute(Course[] courses, Offer[] offers) {
		super();
		this.courses = courses;
		this.offers = offers;
	}

	public Course[] getCourses() {
		return courses;
	}

	public Offer[] getOffers() {
		return offers;
	}

	public void enrollStudentInCourse(int courseId, String studentName)
	{
		for(Course co:courses)
		{
			if(co.courseId==courseId)
			{
				System.out.println("coures is avilible");
			}
			else
			{
				System.out.println("coures is not  avilible ");
			}
		}

	}





}
