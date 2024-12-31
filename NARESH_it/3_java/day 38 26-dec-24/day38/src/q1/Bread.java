package q1;

public class Bread extends Food{
	int tastyScore = 8;
	String type = "vegetarian";
	public Bread(double proteins, double fats, double carbs, double tastyScore) {
		super(proteins, fats, carbs, tastyScore);
		// TODO Auto-generated constructor stub
	}
	
	

	public int getTastyScore() {
		return tastyScore;
	}



	public String getType() {
		return type;
	}



	@Override
	void getMacroNutrients() {
		System.out.println("A slice of bread has "+this.proteins+"gms of protein,"+this.fats+" gms of fats and "+this.carbs+" gms of carbohydrates.");
		
	}
	
	

}
