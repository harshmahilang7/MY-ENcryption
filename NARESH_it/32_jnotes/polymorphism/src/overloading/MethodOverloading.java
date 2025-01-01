package overloading;

//WAP to show method overloading by changing the return type :

class Sum
{
	public int add(int x, int y)
	{
		return (x+y);
	}
	public double add(double x, double y)
	{
		return (x+y);
	}
	
	public String add(String x, String y)
	{
		return (x+y);
	}
}

public class MethodOverloading 
{
	public static void main(String[] args) 
	{
		Sum s1 = new Sum();
	    System.out.println(s1.add("Data", "base"));
	    System.out.println(s1.add(12.90, 45.89));
	    System.out.println(s1.add(10, 20));
	    

	}

}