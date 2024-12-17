package day34_q2;

public class Nurse extends HospitalStaff {
	private int yearsOfExperience;

	public Nurse(String name, int age, String role, int yearsOfExperience) {
		super(name, age, role);
		this.yearsOfExperience = yearsOfExperience;
	}

	@Override
	public String toString() {
		return "Nurse [yearsOfExperience=" + yearsOfExperience + "]";
	}

	@Override
	 public void work()
	{
		System.out.println(super.toString());
		System.out.println(this.toString());
	}



}
