package day34_q2;

public class HospitalStaff {
	private String name;
	private int age;
	private String role;

	public HospitalStaff(String name, int age, String role) {
		super();
		this.name = name;
		this.age = age;
		this.role = role;
	}

	@Override
	public String toString() {
		return "HospitalStaff [name=" + name + ", age=" + age + ", role=" + role + "]";
	}

	 public void work()
	{
		System.out.println(this.toString());
	}


}
