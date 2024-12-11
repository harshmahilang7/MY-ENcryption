package day31question1;


public class TaxCalculation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Employee e1=new Employee(101, "dastan", 8000, 2000, 3000);
		System.out.println("employe Gross sal"+e1.calculateGrossSalary());

		Manager m1=new Manager(201, "vijay", 20000, 2500, 3000, 5000);
		System.out.println("Manager Gross sal"+m1.calculateGrossSalary());

		Sourcing s1 = new Sourcing(301, "avinash", 4000, 1000, 500, 100, 70, 20);
		System.out.println("Sourcing Gross sal"+s1.calculateGrossSalary());

		Trainer t1 =new Trainer(401, "Ganga", 5000, 6000, 18000, 20, 100);
		System.out.println("Trainer Gross sal"+t1.calculateGrossSalary());

		TaxUtil tax =new TaxUtil();

		System.out.println("employe calculateTax : "+tax.calculateTax(e1));
		System.out.println("Manager calculateTax : "+tax.calculateTax(m1));
		System.out.println("Sourcing calculateTax : "+tax.calculateTax(s1));
		System.out.println("Trainer calculateTax : "+tax.calculateTax(t1));



	}

}
