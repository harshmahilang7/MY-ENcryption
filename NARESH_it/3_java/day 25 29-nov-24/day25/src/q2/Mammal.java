package q2;

public class Mammal extends Animal {
//
//	Requirements:
//		Extend the Animal class.
//		Add a private boolean attribute named hasFur.
//		Implement a parameterized constructor to initialize name (from Animal) and hasFur.
//		Implement getter and setter methods for hasFur.
//		Override the displayDetails method to include information about fur.

	private boolean hasFur;

public Mammal(String name, boolean hasFur) {
	super(name);
	this.hasFur = hasFur;
}

public boolean isHasFur() {
	return hasFur;
}

public void setHasFur(boolean hasFur) {
	this.hasFur = hasFur;
}

@Override
public String toString() {
	return "Mammal [toString()=" + super.toString() + ", hasFur=" + hasFur + "]";
}




}
