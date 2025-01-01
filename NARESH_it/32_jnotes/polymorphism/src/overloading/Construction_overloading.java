package overloading;

// Construction overloading 

class Addition
{
	public Addition(int x, int y)                             // Construction overloading
	{
		this(2.3F, 7.8f);
		System.out.println("Sum of two integer is :"+(x+y));
	}
	
	public Addition(float x, float y)                          // Construction overloading
	{
		this("Data","base");
		System.out.println("Sum of two float is :"+(x+y));
	}
	
	public Addition(String x, String y)                       // Construction overloading
	{
		super();
		System.out.println("Concatenation of two String is :"+(x+y));
	}
}

public class Construction_overloading
{
	public static void main(String[] args) 
	{
		 new Addition(100,20);
		
	}

}