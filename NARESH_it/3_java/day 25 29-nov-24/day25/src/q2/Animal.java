package q2;

public class Animal {

//	Define a private String attribute named name.
//	Implement a parameterized constructor to initialize name.
//	Implement getter and setter methods for name.
//	Create a method to display the animal's details.

	private String name;

public Animal(String name) {
	super();
	this.name = name;
}

public String getName() {
	return name;
}

public void setName(String name) {
	this.name = name;
}

@Override
public String toString() {
	return "Animal [name=" + name + "]";
}

}
