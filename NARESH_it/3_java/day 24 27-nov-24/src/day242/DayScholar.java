package day242;

public class DayScholar extends Student {
	double transportFee;

	public DayScholar(int studentId, String name, double examFee, double transportFee) {
		super(studentId, name, examFee);
		this.transportFee = transportFee;
	}

	public String displayDetails()
	{
		return toString();
	}
     public double payFee(double amount) {
    	 double total=examFee+transportFee;
    	 return total -amount;
     }
	@Override
	public String toString() {
		return "DayScholar [transportFee=" + transportFee + ", toString()=" + super.toString() + "]";
	}




}

