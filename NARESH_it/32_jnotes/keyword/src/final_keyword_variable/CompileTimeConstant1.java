package final_keyword_variable;
class Foo1
{
	public static final int A = returnValue(); 
	
	static 
	{
		System.out.println("Static Block");
	}
	
	public static int returnValue()
	{
		return 500;
	}
}

public class CompileTimeConstant1 
{
	public static void main(String[] args) 
	{
		System.out.println(Foo1.A);
//		System.out.println(Integer.MAX_VALUE);
	}
}