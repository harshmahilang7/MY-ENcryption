package No_default_method_override_public_method_of_Object_class;

//
//Can a default method of interface override/write the public method of Object class with same signature and return type ?
//
//No, 
//a default method of an interface can't override/write the public method of Object class due to the following two reason
//
//
//1) Ambiguity issue : Object class already contain the method which
//                     interface wants to define as a default method 
//                      hence it will provide Ambiguity to sub class
//		                                        (Implementer class)
//2) Priority : Concrete method is having more priority than 
//              default method that means
//Object class method is having more priority than default method of interface 
//so compiler will not allow to write any default method as a public method of Object class.

interface Moveable
{
	default String toString() //error becoz it is Object class {
		return "NIT";
	}
}



public class ELC
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub

	}

}
