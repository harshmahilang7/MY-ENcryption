package static_polymorphism_overloading;

class Addition
{
	public Addition(int x, int y)
	{
		this(2.3F, 7.8f);
		System.out.println("Sum of two integer is :"+(x+y));
	}
	
	public Addition(float x, float y)
	{
		this("Data","base");
		System.out.println("Sum of two float is :"+(x+y));
	}
	
	public Addition(String x, String y)
	{
		super();
		System.out.println("Concatenation of two String is :"+(x+y));
	}
}

public class MethodOverloading_demo1 
{
	public static void main(String[] args) 
	{
		 new Addition(100,200);
		

	}

}

