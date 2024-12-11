package day31question1;

//Class Trainer
//Fields: trainerId: int, trainerName : String, basicSalary : double, HRAPer : double,DAPer : double, batchCount: int, perkPerBatch: double
//
//public Method: calculateGrossSalary() - returns a double
//Calculate the gross salary as : basicSalary +HRAPer +DAPer +(batchCount * perkPerBatch)
public class Trainer {
	int trainerId;
	String trainerName;
	double HRAPer;
	double DAPer;
	double basicSalary;
	int batchCount;
	double perkPerBatch;



	public Trainer(int trainerId, String trainerName, double hRAPer, double dAPer, double basicSalary, int batchCount,
			double perkPerBatch) {
		super();
		this.trainerId = trainerId;
		this.trainerName = trainerName;
		HRAPer = hRAPer;
		DAPer = dAPer;
		this.basicSalary = basicSalary;
		this.batchCount = batchCount;
		this.perkPerBatch = perkPerBatch;
	}



	public double calculateGrossSalary()
	{
		return basicSalary +HRAPer +DAPer +(batchCount * perkPerBatch);
	}


}
