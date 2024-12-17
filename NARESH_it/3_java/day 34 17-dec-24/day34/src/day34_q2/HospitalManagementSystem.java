package day34_q2;

public class HospitalManagementSystem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Doctor d1=new Doctor("dastan", 19, "main", "land specialization");
//		d1.toString();
		d1.work();

		Nurse n1=new Nurse("Avinash", 59, "washroom specialization",40);
		n1.work();


	}

}
