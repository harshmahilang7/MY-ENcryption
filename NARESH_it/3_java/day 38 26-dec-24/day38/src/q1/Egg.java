package q1;

public class Egg extends Food
{
	
//	int tastyScore;
	String type = "non-vegetarian";
	
	public Egg(double proteins, double fats, double carbs, double tastyScore) {
		super(proteins, fats, carbs, tastyScore);
	}

	@Override
	void getMacroNutrients() {
		System.out.println("An egg has "+this.proteins+"gms of protein,"+this.fats+" gms of fats and "+this.carbs+" gms of carbohydrates.");
		
	}

	public double getTastyScore() {
		return super.tastyScore;
	}

	public String getType() {
		return type;
	}
	
	

}
