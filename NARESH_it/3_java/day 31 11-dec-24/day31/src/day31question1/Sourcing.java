package day31question1;

//Fields: sourceId: int, sourcaName : String, basicSalary : double, HRAPer : double,DAPer : double, enrollmentTarget: int, enrollmentReached: int, perkPerEnrollment: double
//
//Public Method: calculateGrossSalary() - returns a double
//
//Calculate the gross salary as : basicSalary +HRAPer +DAPer +(((enrollmentReached/enrollmentTarget)*100)*perkPerEnrollment
public class Sourcing {
	int sourceId;
	String sourcaName;
	double basicSalary;
	double HRAPer;
	double DAPer;
	int enrollmentTarget;
	int enrollmentReached;
	double perkPerEnrollment;



	public Sourcing(int sourceId, String sourcaName, double basicSalary, double hRAPer, double dAPer,
			int enrollmentTarget, int enrollmentReached, double perkPerEnrollment) {
		super();
		this.sourceId = sourceId;
		this.sourcaName = sourcaName;
		this.basicSalary = basicSalary;
		HRAPer = hRAPer;
		DAPer = dAPer;
		this.enrollmentTarget = enrollmentTarget;
		this.enrollmentReached = enrollmentReached;
		this.perkPerEnrollment = perkPerEnrollment;
	}



	public double calculateGrossSalary()
	{
		return basicSalary+HRAPer+DAPer +(((enrollmentReached/enrollmentTarget)*100)*perkPerEnrollment);
	}

}
