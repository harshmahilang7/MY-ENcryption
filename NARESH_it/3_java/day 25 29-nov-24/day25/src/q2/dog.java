package q2;

public class dog extends Mammal {

//	
//	3. Create the Dog Class
//	Requirements:
//	Extend the Mammal class.
//	Add a private String attribute named breed.
//	Implement a parameterized constructor to initialize name, hasFur (from Mammal), and breed.
//	Implement getter and setter methods for breed.
//	Override the displayDetails method to include information about the breed.
	
	private String breed;

public dog(String name, boolean hasFur, String breed) {
	super(name, hasFur);
	this.breed = breed;
}

public String getBreed() {
	return breed;
}

public void setBreed(String breed) {
	this.breed = breed;
}

@Override
public String toString() {
	return "dog [toString()=" + super.toString() + ", breed=" + breed + "]";
}
	

}
