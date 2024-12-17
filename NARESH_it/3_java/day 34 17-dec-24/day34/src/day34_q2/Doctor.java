package day34_q2;

public class Doctor extends HospitalStaff {
	private String specialization;

	public Doctor(String name, int age, String role,String specialization) {
		super(name, age, role);
		this.specialization=specialization;
	}

	@Override
	public String toString() {
		return "Doctor [specialization=" + specialization + "]";
	}

	@Override
	 public void work()
	{
		System.out.println(super.toString());
		System.out.println(this.toString());
	}






}
