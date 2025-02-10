package sencrio;

public class main {

	public static void main(String[] args) {

//
//			The EducationInstituteApp class is the main program that sim
//		ulates concurrent student interactions using threads.
//
//			It creates an education institute, initializes
//		students, and allows them to view course details,
//		ongoing offers, and enroll in courses concurrently without disturbing the execution flow of each thread.

		Offer[] o= new Offer[2];
		o[0]=new Offer("20%");
		o[1]=new Offer("40%");

		Course []c1=new Course[4];
		c1[0]= new Course(1, "maths", 2000);
		c1[1]= new Course(2, "english", 1000);
		c1[2]= new Course(3, "hindi", 1000);
		c1[3]= new Course(4, "evs", 3000);
		
		EducationInstitute e1=new EducationInstitute(c1, o);

		Student s1= new Student(e1, "harsh");

		s1.viewCoursesAndFees();
		e1.enrollStudentInCourse(1, "harsh");

		s1.enrollInCourse(1);
		
		


	}

}
