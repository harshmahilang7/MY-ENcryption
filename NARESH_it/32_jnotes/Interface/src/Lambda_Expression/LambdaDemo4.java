package Lambda_Expression;

//the following program explains that Lambda target must be 
//functional interface only.
@FunctionalInterface
interface Drawable
{
	void draw();
	void drawing();   
}


public class LambdaDemo4 {
	public static void main(String[] args) 
	{
	  Drawable d1 =	()-> System.out.println("Drawing"); 
	  d1.draw();
	}
}
