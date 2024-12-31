package q1;

public abstract class Food {
	double proteins;
	double fats;
	double carbs;
	double tastyScore;

	public Food(double proteins, double fats, double carbs, double tastyScore) {
		super();
		this.proteins = proteins;
		this.fats = fats;
		this.carbs = carbs;
		this.tastyScore = tastyScore;
	}

	abstract void getMacroNutrients();
}
