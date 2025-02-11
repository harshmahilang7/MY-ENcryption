package exception_is_the_super_class_of_all_types_of_exception;
//WAP to show that Exception is the super class of all types of 
//Exception whether it is checked Or unchecked



public class Exception_is_the_super_class_of_all_types_of_exception { 

	public static void main(String[] args) 
	{
		Exception e1 = new ArithmeticException("harsh divides by zero");
		System.out.println(e1.toString());  //java.lang.AE : Ravi divides by zero
		
		
		Exception e2 = new InterruptedException();
		System.out.println(e2.toString()); //java.lang.IE

	}

}