package day31question1;

//Class TaxUtil
//Fields: None
//Public Methods:
//calculateTax(Employee e) - returns a double
//calculateTax(Manager m) - returns a double
//calculateTax(Trainer t) - returns a double
//calculateTax(Sourcing s) - returns a double
//
//Tax Calculation Logic: If gross salary is greater than 50000 tax is 20% else, tax is 5%.
//
public class TaxUtil
{

	public static double cal(double gS)
	{
		if(gS>50000)
		{
			return gS*0.2;
		}
		else return gS*0.05;
	}
	public double calculateTax(Employee e)
	{
		double gS=e.calculateGrossSalary();
		return cal(gS);
	}
	public double calculateTax(Manager m)	{
		double gS=m.calculateGrossSalary();
		return cal(gS);
	}
	public double calculateTax(Trainer t)	{
		double gS=t.calculateGrossSalary();
		return cal(gS);
	}
	public double calculateTax(Sourcing s) 	{
		double gS=s.calculateGrossSalary();
		return cal(gS);
	}

}
