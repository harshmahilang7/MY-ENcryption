package q2;


//
//Bonus (BLC):
//
//Attributes (all private):
//bonusAmount (double) - The calculated bonus amount.
//
//Methods:
//getBonusAmount(): double - Returns the bonus amount.
//calculateBonus(Employee employee): Bonus - A static method that takes an Employee object as a parameter and returns a Bonus object. The bonus is calculated based on the performanceRating.
//
//Logic:
//Performance Rating 1: Bonus = 5% of basic salary
//Performance Rating 2: Bonus = 10% of basic salary
//Performance Rating 3: Bonus = 15% of basic salary
//Performance Rating 4: Bonus = 20% of basic salary
//Performance Rating 5: Bonus = 25% of basic salary
//


public class Bonus {
	private double bonusAmount;

	public double getBonusAmount() {
		return bonusAmount;
		
	}	
	
	public static Bonus calculateBonus(Employee employee)
	{
		Bonus obj1=new Bonus();
		int performance=employee.getPerformanceRating();
		double bs=employee.getBasicSalary();
		if(performance==1)
		{
			obj1.bonusAmount=bs/100*5;
		}
		else if(performance==2)
		{
			obj1.bonusAmount=bs/100*10;
		}
		else if(performance==3)
		{
			obj1.bonusAmount=bs/100*15;
		}
		else if(performance==4)
		{
			obj1.bonusAmount=bs/100*20;
		}
		else if(performance==5)
		{
			obj1.bonusAmount=bs/100*25;
		}
		return obj1;
	}

	
	
	

}
