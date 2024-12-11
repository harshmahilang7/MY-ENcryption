package day31question1;
//Class Manager
//Fields: managerId: int, managerName : String, basicSalary : double, HRAPer : double,DAPer : double, projectAllowance: double
//
//public Method: calculateGrossSalary() - returns a double
//Calculate the gross salary as : basicSalary +HRAPer +DAPer + projectAllowance
public class Manager {
	int managerId;
	String managerName;
	double basicSalary ;
	double DAPer ;
	double projectAllowance;
	double HRAPer;



	public Manager(int managerId, String managerName, double basicSalary, double dAPer, double projectAllowance,
			double hRAPer) {
		super();
		this.managerId = managerId;
		this.managerName = managerName;
		this.basicSalary = basicSalary;
		DAPer = dAPer;
		this.projectAllowance = projectAllowance;
		HRAPer = hRAPer;
	}



	public double calculateGrossSalary()
	{
		return basicSalary +HRAPer +DAPer + projectAllowance;
	}

}
