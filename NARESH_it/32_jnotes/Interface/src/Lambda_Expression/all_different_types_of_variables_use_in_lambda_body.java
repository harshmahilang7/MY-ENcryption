package Lambda_Expression;


//Yes, we can use all different types of variables 
//like static field, 
//non static field and 
//local variable in the lambda body.
//
//The local variable must be final or effectively final 
//otherwise we will get compilation error.


@FunctionalInterface
interface Drawable
{
	void draw();
}

public class all_different_types_of_variables_use_in_lambda_body 
{	
	
	public static void main(String[] args) 
	{
		String shapeType = "Rectangle";  //local variable
		
		// shapeType = "Square";  //[It is Invalid]
		// if we declare again the it is not effectively final 
		// one time declare => effectively final any  variable 
		int a =0;
//		a=1; one time declare => effectively final any  variable
		
	    Drawable d1 = ()->
		{
		   System.out.println("Drawing : "+shapeType+a);
		};
		
		d1.draw();
	}
}