package day22setAq3;

//Que 3 :
//=======
//
//Class Descriptions:
//
//JobProfile Class:
//
//Attributes:
//companyName (String)
//role (String)
//salary (double)
//location (String)
//placementCell (String):
//
//
//Methods:
//displayDetails(): Displays the details of the job profile.
//
//
//PlacementManager Class:  //BLC Class
//
//Methods:
//static JobProfile createJobProfile(String companyName, String role, double salary, String location): Creates and returns a JobProfile object with the given details.
//
//
//Student Class: //BLC Class
//
//Attributes:
//name (String)
//cgpa (double)
//jobProfile (JobProfile)
//
//Methods:
//void assignJobProfile(JobProfile jobProfile): Assigns a job profile to the student if their CGPA meets the minimum requirement (e.g., CGPA ≥ 7.0).
//void acceptOffer(): Marks the job offer as accepted by the student.
//void displayDetails(): Displays the details of the student and their assigned job profile (if accepted).
//
//
//Main (Driver Class):
//
//This class should demonstrate the following:
//Use the PlacementManager class to create a job profile.
//Create a Student object and assign a job profile after verifying eligibility.
//Allow the student to accept the offer and display their details.
//
//
//Sample Input and Output:
//--------------------------------
//        Input (Job Profile Creation):
//	Company Name: "Google"
//      	Role: "Software Engineer"
//	Salary: 25,00,000
//	Location: "Bangalore"
//
//	Input (Student Details):
//        Student Name: "Biren Kumar"
//        CGPA: 7.5
//
//
//Sample Output (Job Assignment and Acceptance):
//--------------------------------
//
//Creating Job Profile...
//Assigning job profile to Biren Kumar...
//
//Job Offer Accepted!
//Student Details:
//Name: Biren Kumar
//CGPA: 7.5
//
//Assigned Job Profile:
//Placement Cell: NIT Placement Cell
//
//Company Name: Google
//Role: Software Engineer
//Salary: 25,00,000
//Location: Bangalore
public class JobProfile {
	
	String companyName;
	String role;
	double salary;
	String location;
	String placementCell;
	
	
	
	
	public JobProfile(String companyName, String role, double salary, String location, String placementCell) {
		super();
		this.companyName = companyName;
		this.role = role;
		this.salary = salary;
		this.location = location;
		this.placementCell = placementCell;
	}




	@Override
	public String toString() {
		return "JobProfile [companyName=" + companyName + ", role=" + role + ", salary=" + salary + ", location="
				+ location + ", placementCell=" + placementCell + "]";
	}
	
	

}
