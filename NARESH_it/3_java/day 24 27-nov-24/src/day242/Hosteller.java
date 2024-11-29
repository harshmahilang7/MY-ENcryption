package day242;

public class Hosteller extends Student {


	double hostelFee ;

	public Hosteller(int studentId, String name, double examFee, double hostelFee) {
		super(studentId, name, examFee);
		this.hostelFee = hostelFee;
	}

	public String displayDetails()
	{
		return toString();
	}
     public double payFee(double amount) {
    	 double total=examFee+hostelFee;
    	 return total -amount;
     }

	@Override
	public String toString() {
		return "Hosteller [hostelFee=" + hostelFee + ", toString()=" + super.toString() + "]";
	}





}
