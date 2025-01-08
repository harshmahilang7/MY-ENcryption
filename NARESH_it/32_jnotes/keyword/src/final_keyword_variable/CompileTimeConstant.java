package final_keyword_variable;

class Foo
{
	public static final int A = 100; //compile time Constant
	
	static 
	{
		System.out.println("Static Block");
	}
}

public class CompileTimeConstant 
{
	public static void main(String[] args) 
	{
		System.out.println(Foo.A);
		System.out.println(Integer.MAX_VALUE);
	}
}
